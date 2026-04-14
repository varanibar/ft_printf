#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char str[] = "";
	char *ptr = str;
	write(1, ptr, ft_strlen(str));
	return(0);
}