/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/13 17:14:24 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/14 14:45:40 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int i;
	int n;

	printf("\033[1;31m\n\n>>> CHARACTER (%%c) <<<\n");

	printf("\033[1;37mprintf > ");
	i =	printf("%c", 'a');
	printf("\ni = %d\n\n", i);

	printf("ft_printf > ");
	n =	ft_printf("%c", 'a');
	printf("\nn = %d\n\n", n);

	printf("\n\n>>> STRING (%%s) <<<\n");
	char str[] = "hello";

	printf("printf > \n");
	i =	printf("%s", str);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%s", str);
	printf("\nn = %d\n\n", n);


	printf("\n\n>>> (SIGNED) DECIMAL INTEGER (%%d) <<<\n");
	int a = -4002;

	printf("printf > \n");
	i =	printf("%d", a);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%d", a);
	printf("\nn = %d\n\n", n);


	printf("\n\n>>> (SIGNED) INTEGER (%%i) <<<\n");
	int b = -4002;

	printf("printf > \n");
	i =	printf("%i", b);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%i", b);
	printf("\nn = %d\n\n", n);


	printf("\n\n>>> UNSIGNED DECIMAL (%%u) <<<\n");
	int c = -42;

	printf("printf > \n");
	i =	printf("%u", c);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%u", c);
	printf("\nn = %d\n\n", n);


	printf("\n\n>>> UNSIGNED HEXADECIMAL (lowercase) (%%x) <<<\n");
	int d = -42;

	printf("printf > \n");
	i =	printf("%x", d);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%x", d);
	printf("\nn = %d\n\n", n);


	printf("\n\n>>> UNSIGNED HEXADECIMAL (upppercase) (%%X) <<<\n");
	int e = -42;

	printf("printf > \n");
	i =	printf("%X", e);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%X", e);
	printf("\nn = %d\n\n", n);
	
	printf("\n\n>>> ADDRESS OF A POINTER (%%p) <<<\n");
	char *ptr = NULL;

	printf("printf > \n");
	i =	printf("%p", ptr);
	printf("\ni = %d\n\n", i);

	printf("ft_printf > \n");
	n =	ft_printf("%p", ptr);
	printf("\nn = %d\n\n", n);

	return (0);
}