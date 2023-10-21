#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
int flag, c, w;
flag = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 */
char **strtow(char *str)
{
char **word_array, *temp_word;
int i, word_count = 0, str_length = 0, words, char_count = 0, start, end;
while (*(str + str_length))
{
str_length++;
}
words = count_word(str);
if (words == 0)
return (NULL);
word_array = (char **)malloc(sizeof(char *) * (words + 1));
if (word_array == NULL)
return (NULL);
for (i = 0; i <= str_length; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (char_count)
{
end = i;
temp_word = (char *)malloc(sizeof(char) * (char_count + 1));
if (temp_word == NULL)
{
return (NULL);
}
while (start < end)
{
*temp_word++ = str[start++];
}
*temp_word = '\0';
word_array[word_count] = temp_word - char_count;
word_count++;
char_count = 0;
}
}
else if (char_count++ == 0)
start = i;
}
word_array[word_count] = NULL;
return (word_array);
}
