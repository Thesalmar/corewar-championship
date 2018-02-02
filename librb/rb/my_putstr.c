/*
** EPITECH PROJECT, 2017
** Bootcamp Rebirth
** File description:
** my_putstr - Print a defined string
*/

#include <stdlib.h>

int my_putstr(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
