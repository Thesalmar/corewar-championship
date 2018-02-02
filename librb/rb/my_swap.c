/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}
