#include <stdio.h>
#include "main.h"

/**
 * set_bit - prints the binary representation of a number
 * @index: index
 * @n: number
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int mask;
    
  if (index >= sizeof(unsigned long int) * 8)
  {
    return (-1); 
  }
  mask = 1UL << index; 
  *n |= mask; 
  return (1);
}
