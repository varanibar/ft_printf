/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 13:37:47 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/26 23:33:34 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format_str, ...);
int		ft_check_format(const char *specif, int *counter);
int		ft_print_format(const char *specif, va_list arg);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_ptr(void *ptr);
int		ft_print_float(double nbr, const char *specif);
int		ft_putnbr_b(long long nbr, char *base);
int		ft_putnbr_b_uns(unsigned long long nbr, char *base);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

#endif
