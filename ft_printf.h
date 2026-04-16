/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/09 13:37:47 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/16 16:31:39 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>//malloc//variable argument lists
# include <unistd.h>//write
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>

int		ft_printf(const char *format_str, ...);
char	*ft_strchr(const char *s, int c);
int		ft_check_format(char specif, int *counter);
int		ft_print_format(char specif, va_list args);
int		ft_print_ptr(void *ptr);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_putnbr_base(long long nbr, char *base);
size_t	ft_strlen(const char *s);


#endif
