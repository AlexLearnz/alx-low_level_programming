#include "main.h"

/**
 * strtow - Splits string into words
 * Line by line
 * @str: The string to be split
 *
 * Delimeters are spaces
 * Each element is a word, NULL terminated
 * Last element is just NULL
 *
 * Return: ptr to an array of words, else NULL
 */

int count_words(char *str)
{
	int count = 0;
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
		{
			i++;
			continue;
		}
		else
		{
			while (*(str + i) != ' ')
			{
				i++;
			}
			count++;
		}
		i++;
	}

	return (count);
}

char **strtow(char *str)
{
	if (str == NULL || str == "")
		return ('\0');

	int words_found = count_words(str);
	char **ptr;

	ptr = (char **)malloc((words_found + 1) * sizeof(char *));

	if (ptr == NULL)
		return ('\0');

	return (ptr);
}
