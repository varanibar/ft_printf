/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/14 13:55:04 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/15 00:41:28 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	print_char(int c)
{
	write(1, &c, 1);
	return(1);
}

int	print_str(char *str)
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

int	putnbr_base_signed(signed long long nbr, char *base)
{
	char			c;
	int		len_base;
	int				index;
	int 			count;

	count = 0;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		count ++;
	}
	if (nbr >= len_base)
		count += putnbr_base_signed(nbr / len_base, base);
	index = nbr % len_base;
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

