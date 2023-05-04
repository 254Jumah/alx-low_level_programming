#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @u: ponter to the unsigned long integer to modify
 * @index: the index of the bit to clear (starting from 0)
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *u, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
return (-1); 

 mask = 1UL << index; 
*u &= ~mask;

return (1);
}
