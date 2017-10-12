/*
** EPITECH PROJECT, 2017
** my getnbr
** File description:
** Return number from the string
*/

int is_good(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	return (0);
	
}

int signe(char const *str, int i)
{
	int	neg = 1;

	while (--i >= 0 && is_good(str[i]) == 2){
		if (str[i] == '-')
			neg = -neg;
	}
	return (neg);
}

int my_getnbr(char const *str)
{
	int i = 0;
	int nb = 0;
	int neg;

	while (str[i] != '\0' && is_good(str[i]) != 1)
		i++;
	neg = signe(str, i);
	while (str[i] != '\0' && is_good(str[i]) == 1)
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	nb = nb * neg;
	return (nb);
}
