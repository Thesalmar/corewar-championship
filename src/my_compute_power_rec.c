/*
** EPITECH PROJECT, 2017
** my compute power rec
** File description:
** 
*/

int	my_compute_power_rec(int nb, int p)
{
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	if (p == 1)
		return (nb);
	if (p >= 12)
		return (84);
	if(p > 1)
		return (nb * my_compute_power_rec(nb, p - 1));
}
