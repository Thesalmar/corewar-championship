/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_putstr
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

void rb_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i++;
	}

	if (str == NULL)
	{
		write(2, "Error:  rb_putstr: String pointer is NULL\n",42);
		my_putchar('\0');
		exit (84);
	}
	return;
}
