/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/14 13:55:04 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/16 16:37:41 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_print_str(char *str)
{
	int	len;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return(6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return(len);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += ft_putnbr_base((long long)ptr, "0123456789abcdef");
	}
	return (count);
}

int	ft_putnbr_base(long long nbr, char *base)
{
	char	c;
	int		len_base;
	int		index;
	int		count;

	count = 1;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		count ++;
	}
	if (nbr >= len_base)
		count += ft_putnbr_base(nbr / len_base, base);
	index = nbr % len_base;
	c = base[index];
	write (1, &c, 1);
	return (count);
}


