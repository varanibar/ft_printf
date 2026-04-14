/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 14:31:51 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/15 00:41:30 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int	print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += putnbr_base_unsigned(ptr, "0123456789abcdef");
	}
	return (count);
}

int	format(char format_char, va_list args)
{
	int	counter;

	counter = 0;
	if (format_char == 'c')
		counter += print_char(va_arg(args, int));
	else if (format_char == 's')
		counter += print_str(va_arg(args, char *));
	else if (format_char == 'd' || format_char == 'i')
		counter += putnbr_base_signed(va_arg(args, signed int), "0123456789");
	else if (format_char == 'u' )
		counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789");
	else if (format_char == 'x')
		counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format_char == 'X')
		counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format_char == 'p')
		counter += print_ptr(va_arg(args, uintptr_t));
	else if (format_char == '%')
		counter += write(1, "%", 1);
	return (counter);
}

int	ft_printf(const char *format_str, ...)
{
	int		i;
	int		counter;
	va_list	args;

	if (!format_str)
		return (-1);
	va_start(args, format_str);
	i = 0;
	counter = 0;
	while (format_str[i])
	{
		if (format_str[i] == '%')
		{
			if (format_str[i + 1] == '\0')
				return (-1);
			else if (!ft_strchr("csdiuxXp%", format_str[i + 1]))
				return (-1);
			counter += format(format_str[++i], args);
		}
		else
			counter += write(1, &format_str[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
