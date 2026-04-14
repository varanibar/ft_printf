/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/21 19:37:33 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/13 19:31:19 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('a', 1);
// }