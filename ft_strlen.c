/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 13:36:40 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/13 19:31:10 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
