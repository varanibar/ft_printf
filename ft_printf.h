/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 13:37:47 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/14 16:05:58 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>//malloc//variable argument lists
# include <unistd.h>//write
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format_str, ...);
void	format(char format_char, va_list args, int *counter);
int		print_ptr(unsigned long long ptr);
int		print_char(int c);
int		print_str(char *str);
int		putnbr_base_signed(signed long long nbr, char *base);
int		putnbr_base_unsigned(unsigned long long nbr, char *base);

#endif