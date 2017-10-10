/*
** EPITECH PROJECT, 2017
** my strstr
** File description:
** A strstr look alike
*/

char *mystrstr(char const *str, char const *to_find)
{
	int i = 0;
	int j_inc;

	if (str[i] != '\0')
	{
		j_inc = 0;
		while (to_find[j_inc] == str[i + j_inc])
		{
			if (to_find[j_inc + 1] == '\0')
				return (str + i);
			j_inc++;
		}
		i++;
	}
	return (0);
}
