/*
** EPITECH PROJECT, 2017
** my swap
** File description:
** swap content
*/

void	my_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return (0);
}
