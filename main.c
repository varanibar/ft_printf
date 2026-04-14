/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: varaniba <varaniba@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/13 17:14:24 by varaniba      #+#    #+#                 */
/*   Updated: 2026/04/15 00:41:23 by varaniba      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int i;
	int n;
	int diff;


		printf("\033[0;33m\n>>> CHARACTER (%%c) <<<\n");

		char x = 'a';

			printf("\033[1;37mprintf > \n");
			i =	printf("%c", x);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%c", x);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");


		printf("\033[0;33m\n>>> STRING (%%s) <<<\n");

		char *str = NULL;

			printf("\033[1;37mprintf > \n");
			i =	printf("%s", str);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%s", str);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");


		printf("\033[0;33m\n>>> (SIGNED) DECIMAL INTEGER (%%d) <<<\n");

		int a = 0100;

			printf("\033[1;37mprintf > \n");
			i =	printf("%d", a);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%d", a);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");


		printf("\033[0;33m\n>>> (SIGNED) INTEGER (%%i) <<<\n");

		int b = -4002;

			printf("\033[1;37mprintf > \n");
			i =	printf("%i", b);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%i", b);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");



		printf("\033[0;33m\n>>> UNSIGNED DECIMAL (%%u) <<<\n");

		int c = -42;

			printf("\033[1;37mprintf > \n");
			i =	printf("%u", c);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%u", c);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");



		printf("\033[0;33m\n>>> UNSIGNED HEXADECIMAL (lowercase) (%%x) <<<\n");

		int d = -42;

			printf("\033[1;37mprintf > \n");
			i =	printf("%x", d);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%x", d);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");


		printf("\033[0;33m\n>>> UNSIGNED HEXADECIMAL (upppercase) (%%X) <<<\n");

		int e = -42;

			printf("\033[1;37mprintf > \n");
			i =	printf("%X", e);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%X", e);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");


		printf("\033[0;33m\n>>> ADDRESS OF A POINTER (%%p) <<<\n");

		char *ptr = str;

			printf("\033[1;37mprintf > \n");
			i =	printf("%p", ptr);
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%p", ptr);
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");



		printf("\033[0;33m\n>>> DOUBLE PERCENTAGE SIGN (%%) <<<\n");


			printf("\033[1;37mprintf > \n");
			i =	printf("%% %% %%");
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%% %% %%");
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");



		printf("\033[0;33m\n>>> MIX <<<\n");


			printf("\033[1;37mprintf > \n");
			i =	printf("%% %% %% hello %d %u %%%s ", -1, 5, "MIXXXX");
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%% %% %% hello %d %u %%%s ", -1, 5, "MIXXXX");
			printf("\nn = %d\n\n", n);

			diff = i - n;
			if (diff != 0)
				printf("\033[1;31m>>>diff = %d\n\n", diff);
			else
				printf("\033[0;32m>>>diff = 0\n\n");

//undefined behavior?
			printf("\033[1;37mprintf > \n");
			i =	printf("%");
			printf("\nn = %d\n\n", i);

			printf("ft_printf > \n");
			n =	ft_printf("%");
			printf("\nn = %d\n\n", n);

			// diff = i - n;
			// if (diff != 0)
			// 	printf("\033[1;31m>>>diff = %d\n\n", diff);
			// else
			// 	printf("\033[0;32m>>>diff = 0\n\n");

	return (0);
}
