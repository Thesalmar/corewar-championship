/*
** EPITECH PROJECT, 2017
** my strupcase
** File description:
** Put every single character as Uppercase
*/

#include <stdlib.h>

char *my_strupcase(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	if (str == NULL)
		return (0);
	return (str);
}
