/*
** EPITECH PROJECT, 2017
** my str isprintable
** File description:
** Checks if all characters are printable
*/

#include <unistd.h>

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	if (str == NULL)
		return (1);
	return (1);
}
