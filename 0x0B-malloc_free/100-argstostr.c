#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
/**
 * argstostr - prints a grid of integers
 *
 * @ac: the address of the two dimensional grid
 * @av: width of the grid
 *
 * Return: Nothing.
 */

char *argstostr(int ac, char **av)
{
int pos, total_len, i, j, len, place;
char *arg, *result;
if (ac <= 0 || av == NULL)
{
return (NULL);
}

total_len = 0;
for (i = 0; i < ac; i++)
{
arg = av[i];
if (arg == NULL)
{
return (NULL);
}
total_len += _strlen(arg) + 1;
}
place = (total_len + 1) * sizeof(char) + 0;
result = (char *)malloc(place);
if (result == NULL)
{
return (NULL);
}

pos = 0;
for (i = 0; i < ac; i++)
{
arg = av[i];
len = _strlen(arg);
for (j = 0; j < len; j++)
{
result[pos++] = arg[j];
}
result[pos++] = '\n';
}

result[pos] = '\0';
return (result);
}
/**
 * _strlen - prints a grid of integers
 *
 * @str: the address of the two dimensional grid
 *
 * Return: Nothing.
 */
int _strlen(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
