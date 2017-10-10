/*
** EPITECH PROJECT, 2017
** my evil str
** File description:
** Return the string inside out
*/

int     my_strlen(char *str)
{
        int i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

char	*my_revstr(char *str)
{
	int	i;
	int	len;
	int	temp;

	i = 0;
	len = my_strlen(str) - 1;
	while(len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
