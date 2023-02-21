 #include<unistd.h>

/**
 *_putchar-writes character
 *@c:the character to print
 *return:on succes 1
 *on erroe -1
 */
int _putchar(char c)

{
  return (write(1, &c, 1));
}
