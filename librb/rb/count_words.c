/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** count_words
*/

#include <unistd.h>
#include <stdlib.h>

int count_words(char *str)
{
	int i = 0;
	int w = 0;

	if (str == NULL)
	{
		write(2, "Error:  count_words: String pointer is NULL\n",44);
		exit(84);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
				{
					i++;
				}
				w++;
			}
			else
				i++;
		}
	}
	return (w);
}
