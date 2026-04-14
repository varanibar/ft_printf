/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 13:37:47 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/13 19:30:25 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>//malloc
# include <unistd.h>//write
# include <stdlib.h>//variable argument lists
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
// # include "./libft/libft.h"

int	ft_printf(const char *format_str, ...);
void	format(char format_c, va_list args, int *counter);
int	putnbr_base_unsigned(unsigned long long nbr, char *base);
int	putnbr_base_signed(signed int nbr, char *base);
int	print_str(char *str);
int	print_char(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif