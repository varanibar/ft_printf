#include "ft_printf.h"

int	main(void)
{
	char	c = 'a';
	int		d = -42;
	char	s[] = "hello world";
	char	*p = s;
	int		u = 42;
	int		x = 42;
	int		X = 42;
	ft_printf("\n>>>> TESTING FT_PRINTF <<<<\n\n");
	ft_printf("%%c > %c\n", c);
	ft_printf("%%d > %d\n", d);
	ft_printf("%%s > %s\n", s);
	ft_printf("%%p > %p\n", p);
	ft_printf("%%u > %u\n", u);
	ft_printf("%%x > %x\n", x);
	ft_printf("%%X > %X\n", X);
	ft_printf("%%%% > printing a lonely %% sign\n\n");
	return (0);
}
