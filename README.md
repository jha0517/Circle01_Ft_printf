# ft_printf

The `ft_printf` function is a recreation of the standard `printf` function in C. It allows you to format and print text to the console according to your specifications.

❮img src="image.png"❯

## Installation

To use `ft_printf`, first, clone the repository:

```
git clone <repository-url>

```

Then, compile the library:

```
make

```

Link the library to your project:

```
gcc -o <output-file> <source-file> -L. -lftprintf

```

## Usage

The `ft_printf` function takes a format string and any number of arguments, depending on the format string. The format string contains format specifiers, which begin with a `%` character, and are replaced by their corresponding argument when the function is called.

The following format specifiers are supported:

| Specifier | Output |
| --- | --- |
| %c | Character |
| %s | String |
| %p | Pointer |
| %d | Signed decimal integer |
| %i | Signed decimal integer |
| %u | Unsigned decimal integer |
| %x | Unsigned hexadecimal integer (lowercase) |
| %X | Unsigned hexadecimal integer (uppercase) |
| %% | A literal % character |

### Examples

```
#include "ft_printf.h"

int main(void)
{
  char *str = "world";

  ft_printf("Hello, %s!\\n", str);
  ft_printf("Decimal: %d\\n", 42);
  ft_printf("Hexadecimal: %x\\n", 42);
  ft_printf("Pointer: %p\\n", &str);
  return (0);
}

```

### Output

```
Hello, world!
Decimal: 42
Hexadecimal: 2a
Pointer: 0x7ffee6dbb7c0

```

## Authors

ft_printf was created by Hyunah JUNG. If you have any questions or feedback, please feel free to contact me.

## Acknowledgements

We would like to thank 42 school for providing us with the opportunity to work on this project and learn new skills.
