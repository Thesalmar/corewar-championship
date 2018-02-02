/*
** EPITECH PROJECT, 2017
** my str islower
** File description:
** Checks if all characters are lowercase letters
*/

#include <unistd.h>

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	if (str == NULL)
		return (1);
	return (1);
}
