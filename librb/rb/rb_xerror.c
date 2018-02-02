/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_xerror
*/

#include <unistd.h>
#include <stdlib.h>

void	rb_xerror(char *c)
{
	write(2, "Error: ", 7);
	write(2, c, 12);
}
