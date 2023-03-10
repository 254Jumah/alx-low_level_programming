#include <unistd.h>
/**
 *_putchar-writes the character
 *@c:the char to print
 *
 *Return:On succes
 *on errors-1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
