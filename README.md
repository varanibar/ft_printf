*This project has been created as part of the 42 curriculum by varaniba*
# DESCRIPTION
This project consists of recreating the `printf` function by handling a limited set of format specifiers. The implementation is based on a main function that parses the format string character by character. The project uses a variadic function to access the additional arguments passed to `ft_printf`. Each supported specifier is associated with the appropriate argument type and printed using the corresponding helper function.
## METHOD
The implementation is divided into several helper functions to keep the code modular and readable.
1. `ft_printf`
   `ft_printf` is the main control function. Since the function accepts a variable number of arguments, an object of type `va_list` must be declared and initialized. This object is then used with the macros `va_start`, `va_arg`, and `va_end`.
   The function first checks for invalid input. If the format string passed is `NULL`, the function stops and returns `-1`.It then parses the format string character by character. When a regular character is found, it is written directly to the standard output. When a `%` is encountered, the following character is checked to determine whether it is a valid format specifier.
2. `ft_check_format`
   This function verifies whether the character following `%` is a valid format specifier. If the character is recognized, the function will return `1`. If it is not a valid format specifier, the function returns `0` and `ft_printf` stops and returns `-1`.
3. `ft_print_format`
   Once the specifier has been validated, it is passed to `ft_print_format` together with the corresponding argument. This function determines which helper function must be called according to the format specifier. Each argument is retrieved with `va_arg` using the appropriate type, then passed to the corresponding printing function.
   The supported specifiers are handled as follows:
   - `%c`: argument type `int`, printed with `ft_print_char`
   - `%s`: argument type `char *`, printed with `ft_print_str`
   - `%d` / `%i`: argument type `int`, printed with `ft_putnbr_b`
   - `%u`: argument type `unsigned int`, printed with `ft_putnbr_b_uns` using a decimal base
   - `%x` / `%X`: argument type `unsigned int`, printed with `ft_putnbr_b_uns` using a hexadecimal base
   - `%p`: argument type `void *`, printed with `ft_print_ptr`
   - `%%`: no argument is retrieved; the character `%` is written directly to the standard output

4. Printing functions
   - `ft_print_char` writes a single character to the standard output.
   - `ft_print_str` writes a string to the standard output. If the string is `NULL`, it writes `(null)`.
   - `ft_print_ptr` prints a pointer address in hexadecimal format. If the pointer is `NULL`, it writes `(nil)`. Otherwise, it writes the `0x` prefix followed by the address converted to hexadecimal.
   - `ft_putnbr_b` prints a signed number in the base given as argument. If the number is negative, it first writes `-` and then prints the absolute value.
   - `ft_putnbr_b_uns` prints an unsigned number in the base given as argument. It is used for unsigned decimal values as well as hexadecimal values.



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
	ft_printf("%%%% > printing a lonely %% sign\n\n");
	return (0);
}
```

# RESOURCES
To create this project, the references and tools used were:
- Linux man page [manual](https://linux.die.net/man/)
- Linux man page [printf(3)](https://linux.die.net/man/3/printf)
- Linux man page [stdarg(3)](https://man7.org/linux/man-pages/man3/va_start.3.html)
- Linux man page [uintptr_t(3type)](https://man7.org/linux/man-pages/man3/intptr_t.3type.html)
- Stack Overflow [website](https://stackoverflow.com/questions)
- Github [website](https://github.com/)
- Geeks for geeks [Variadic Functions in C](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
- Youtube:
Jacob Sorber [
How to write C functions with variable argument lists](https://www.youtube.com/watch?v=S-ak715zIIE)
- Youtube: Portfolio Courses [
How to create functions with a variable number of arguments using stdarg.h | C Programming Tutorial](https://www.youtube.com/watch?v=3iX9a_l9W9Y)
AI Use:
- ChatGPT :
AI was used as a learning tool to better understand and clarify C concepts such as variadic functions and type conversions. The code in this project was written by me.
