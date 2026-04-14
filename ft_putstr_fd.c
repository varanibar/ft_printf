/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/21 19:50:20 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/13 19:31:08 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

// int	main(void)
// {
// 	ft_putstr_fd("hello", 1);
// }