/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** my_strlen
*/

int my_strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
