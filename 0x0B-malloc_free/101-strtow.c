#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * countWords - counts the number of words in a string
 * @str: pointer to an array of strings
 * Return: count of words
*/
int countWords(const char *str)
{
	int count = 0;
	int word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!word)
			{
				count++;
				word = 1;
			}
		}
		else
		{
			word = 0;
		}
	}
	return (count);
}
/**
 * copyWord - copies a word from the input string
 * @str: pointer to an array of chars
 * @start: starting point
 * @end: ending point
 * Return: word
*/
char *copyWord(const char *str, int *start, int end)
{
	int j = 0, i;

	char *word = (char *)malloc(end - *start + 1);

	if (word == NULL)
	{
		return (NULL);
	}
	for (i = *start; i < end; i++)
	{
		word[j++] = str[i];
	}
	word[j] = '\0';

	*start = end + 1;

	return (word);
}
/**
 * strtow -  splits a string into words
 * @str: pointer to an array
 * Return: an array
*/
char **strtow(char *str)
{
	int j, i;
	int wordIndex;
	int numWords;
	char **wordArray;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	numWords = countWords(str);

	wordArray = (char **)malloc((numWords + 1) * sizeof(char *));

	if (wordArray == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			j = i;

			while (str[j] != ' ' && str[j] != '\0')
				j++;

			wordArray[wordIndex++] = copyWord(str, &i, j);

			if (wordArray[wordIndex - 1] == NULL)
			{
				int k;

				for (k = 0; k < wordIndex - 1; k++)
					free(wordArray[k]);

				free(wordArray);
				return (NULL);
			}
		}
	}
	wordArray[numWords] = NULL;
	return (wordArray);
}
