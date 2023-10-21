#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *cs = malloc(sizeof(char) * size);

if (cs == NULL || size <= 0)
return (NULL);

for (i = 0; i < size; ++i)
{
cs[i] = c;
}
return (cs);
}
