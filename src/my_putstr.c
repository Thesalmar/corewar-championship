/*
** EPITECH PROJECT, 2017
** my putstr
** File description:
** Print a defined string
*/

#include <stdlib.h>

int	my_putstr(char const *str)
{
	int	i;

	i = 0;

	if(str == NULL)
	{
		return ;
	}
	while(str[i] != '\0')
	{
		my_putchar(str[i]);
		i++;
	}
}
