/*
** EPITECH PROJECT, 2017
** my strlen
** File description:
** Return the length of the string
*/

int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
