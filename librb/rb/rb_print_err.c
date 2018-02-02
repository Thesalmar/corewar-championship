/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_print_err
*/

#include <unistd.h>

void rb_print_err(char *c)
{
	write(1, c, 29);
	return;
}
