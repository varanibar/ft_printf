#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	double		f = 452.5;
	int i = ft_printf("%.5f%c\n", f, 'a');
	ft_printf("i= %d\n\n", i);
	int n = printf("%.5f%c\n", f, 'a');
	printf("i= %d\n\n", n);
	return (0);
}
