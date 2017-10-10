/*
** EPITECH PROJECT, 2017
** my str isalpha
** File description:
** Checks if all characters are alphanumeric
*/

#include <unistd.h>

int my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'  || str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	if (str == NULL)
		return (1);
	return (1);
}
