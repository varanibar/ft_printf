*This project has been created as part of the 42 curriculum by varaniba*
# DESCRIPTION
This project consists of recreating the `printf` function by handling a limited set of format specifiers. The implementation is based on a main function that parses the format string character by character. When a refular character is foind, it is written directly to the standard output. when a `%` is encounter, the following character is identified as a format specifier and passed to a dedicated helper function. The project uses variadic functions through
## METHOD

# INSTRUCTIONS
## Makefile
The library must first be created using the Makefile. The available commands are:
- `make` or `make all`: creates `libftprintf.a`
- `make clean`: removes object (`.o`) files
- `make fclean`: runs `clean` and removes `libftprintf.a`
- `make re`: runs `fclean` and then `make all`
## COMPILATION
Once `libftprintf.a` has been created, it can be compiled together with a test file.
To use the library:
- Include the header file in the project:
```c
#include "ft_printf.h"
```
- Compile with the following flags: `cc -Wall -Wextra -Werror`
- Link the library: `libftprintf.a`

Example:

 `bash`
cc -Wall -Wextra -Werror main.c libftprintf.a

## Example usage
``` c
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
	ft_printf("%%  > printing a lonely %% sign\n\n");
	return (0);
}
```

# RESOURCES
To create this project, the references and tools used were:
- Linux man page [manual](https://linux.die.net/man/)
- Linux man page [printf(3)](https://linux.die.net/man/3/printf)
- Linux man page [uintptr_t(3type)](https://man7.org/linux/man-pages/man3/intptr_t.3type.html)
- Stack Overflow [website](https://stackoverflow.com/questions)
- Github [website](https://github.com/)

AI Use:
- ChatGPT :
AI was used as a learning tool to better understand and clarify C concepts such as variadic functions and type conversions. The code in this project was written by me.
