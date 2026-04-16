/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 14:31:51 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/16 16:37:22 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specif, va_list args)
{
	int	count;

	count = 0;
	if (specif == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (specif == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (specif == 'd' || specif == 'i')
		count += ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (specif == 'u' )
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if (specif == 'x')
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (specif == 'X')
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (specif == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (specif == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_check_format(char specif, int *counter)
{
	if (specif == '\0' || !ft_strchr("csdiuxXp%", specif))
	{
		*counter = -1;
		return (0);
	}
	return (1);
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
			if (!ft_check_format(format_str[i + 1], &counter))
				break ;
			counter += ft_print_format(format_str[++i], args);
		}
		else
			counter += write(1, &format_str[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
