/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_strlowcase
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

char rb_strlowcase(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		write(2, "Error:  rb_strlowcase: String pointer is NULL\n",47);
		exit(84);
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
