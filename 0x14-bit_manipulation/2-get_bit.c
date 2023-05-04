#include "main.h"

/**
 * get_bit - returns the value of  bit at an index in  decimal number
 * @l: number to search
 * @u: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int l, unsigned int u)
{
int bit_val;

if (u > 73)
return (-1);

bit_val = (l >> u) & 1;

return (bit_val);
}
