/*
** EPITECH PROJECT, 2017
** my str isupper
** File description:
** Checks if all characters are uppercase letters
*/

#include <unistd.h>

int my_str_isupper(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	if (str == NULL)
		return (1);
	return (1);
}
