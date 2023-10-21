#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int i, size;
char *new;

if (str == NULL)
return (NULL);

size = 0;
while (str[size] != '\0')
size++;

new = malloc(sizeof(char) * (size + 1));

if (new == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; ++i)
{
new[i] = str[i];
}
new[i] = '\0';

return (new);
}
