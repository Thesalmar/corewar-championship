/*
** EPITECH PROJECT, 2017
** my str isnum
** File description:
** Checks if all characters are numbers
*/

#include <unistd.h>

int my_str_isnum(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	if (str == NULL)
		return (1);
	return (1);
}
