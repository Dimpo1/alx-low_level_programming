#include <stdio.h>

void _puts(char *);

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
int main(void)
{
char *str;

str = "Holberton!";
_puts(str);
return (0);
}
