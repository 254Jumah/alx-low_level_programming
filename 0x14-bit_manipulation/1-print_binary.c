#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask;
int shift;
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);  /* set the mask to the leftmost bit */
for (shift = 0; shift < sizeof(unsigned long int) * 8; shift++) {
if ((n & mask) == 0) {
_putchar('0');
} else {
_putchar('1');
}
n <<= 1;  /* shift the number to the left */
}
}
