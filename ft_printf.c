/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 14:31:51 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/14 13:58:07 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	ft_putchar_fd(c, 1);
	return(1);
}

int	print_str(char *str)
{
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}

int	putnbr_base_signed(signed int nbr, char *base)
{
	long	n;
	char	c;
	int		len_base;
	int		index;
	int 	count;
	
	count = 0;
	len_base = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		count ++;
	}
	if (n >= len_base)
		count += putnbr_base_signed(n / len_base, base);
	index = n % len_base;
	c = base[index];
	count += write (1, &c, 1);
	return (count);
}

int	putnbr_base_unsigned(unsigned long long nbr, char *base)
{
	char			c;
	unsigned int	len_base;
	int				index;
	int				count;
	
	count = 0;
	len_base = ft_strlen(base);
	if (nbr >= len_base)
		count += putnbr_base_unsigned(nbr / len_base, base);
	index = nbr % len_base;
	c = base[index];
	count += write (1, &c, 1);
	return (count);
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

void	format(char format_c, va_list args, int *counter)
{
	if (format_c == 'c')
		*counter += print_char(va_arg(args, int));
	else if (format_c == 's')
		*counter += print_str(va_arg(args, char *));
	else if (format_c == 'd' || format_c == 'i')
		*counter += putnbr_base_signed(va_arg(args, signed int), "0123456789");
	else if (format_c == 'u' )
		*counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789");
	else if (format_c == 'x')
		*counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format_c == 'X')
		*counter += putnbr_base_unsigned(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format_c == 'p')
		*counter += print_ptr(va_arg(args, uintptr_t));
}

int	ft_printf(const char *format_str, ...)
{
	va_list	args;
	va_start(args, format_str);
	int		i;
	int		counter;
	
	i = 0;
	counter = 0;
	while(format_str[i])
	{
		if(format_str[i] == '%' && format_str[i + 1] != '%')
			format(format_str[++i], args, &counter);
		else
		{
			write(1, &format_str[i], 1);
			counter++;
		}
		i++;
	}
	va_end(args);
	return(counter);
}
