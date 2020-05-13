#include "monty.h"

/**
 * strk - Parses a string by space
 * @string: String to parse
 *
 * Return: Returns tokens
 */

char **strk(char *string)
{
	char **new;
	int len, string_num, j = 0, i = 0;

	if (string == NULL)
		return (NULL);

	string_num = string_count(string);
	if (string_num == 0)
		return (NULL);
	new = malloc((string_num + 1) * sizeof(char *));
	if (new == NULL)
		return (NULL);
	while (i < string_num)
	{
		len = string_len(string);
		if (check_space(string[0]))
		{
			string = next_word(string);
		}
		new[i] = malloc((len + 1) * sizeof(char));
		if (new[i] == NULL)
		{
			free_tokens();
			return (NULL);
		}
		j = 0;
		while (j < len)
		{
			new[i][j] = string[j];
			j++;
		}
		new[i][j] = '\0';
		string = next_word(string);
		i++;
	}
	new[i] = NULL;
	return (new);
}
/**
 * string_count - counts the words in a string
 * @string: string to be parsed and counted
 *
 * Return: int
 */

int string_count(char *string)
{
	int i = 0, j = 1, count = 0;

	while (string[i])
	{
		if (check_space(string[i]))
			j = 1;
		else if (j)
		{
			j = 0;
			count++;
		}
		i++;
	}
	return (count);
}
/**
 * string_len - returns len of word
 * @string: contains word
 *
 * Return: int
 */

int string_len(char *string)
{
	int i = 0, j = 1, len = 0;

	while (string[i])
	{
		if (check_space(string[i]))
			j = 1;
		else if (j != 0)
		{
			len++;
		}
		if (len > 0 && check_space(string[i]))
			break;
		i++;
	}
	return (len);
}
/**
 * check_space - checks string for space
 * @c: char from string to be checked
 *
 * Return: int
 */

int check_space(char c)
{
	char space = ' ';

	if (c == space)
		return (1);
	return (0);
}
/**
 * next_word - returns string at next character that isnt a space
 * @string: string given
 *
 * Return: string at next char
 */

char *next_word(char *string)
{
	int i = 0, j = 0;

	while (string[i])
	{
		if (check_space(string[i]))
			j = 1;
		else if (j != 0)
			break;
		i++;
	}
	return (string + i);
}
