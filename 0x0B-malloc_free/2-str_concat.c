#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int lengt(char *s);
/**
 * str_concat - prints buffer in hexa
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j, size1, size2;
char *new;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size1 = lengt(s1);
size2 = lengt(s2);

new = malloc(sizeof(char) * (size1 + size2 + 1));

if (new == NULL)
return (NULL);

for (; s1[i] != '\0'; ++i)
{
new[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; ++j)
{
new[i + j] = s2[j];
}
new[i + j] = '\0';

return (new);
}
/**
 * lengt - prints buffer in hexa
 *
 * @s: the first string.
 *
 * Return: Nothing.
 */
int lengt(char *s)
{

int size = 0;

while (s[size] != '\0')
size++;

return (size);
}
