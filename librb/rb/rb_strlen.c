/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_strlen
*/

#include <unistd.h>
#include <stdlib.h>

int rb_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		write(2, "Error:  rb_strlen: String pointer is NULL\n",42);
		exit (84);
	}

	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
