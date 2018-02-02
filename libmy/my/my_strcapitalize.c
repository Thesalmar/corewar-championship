/*
** EPITECH PROJECT, 2017
** my strcapitalize
** File description:
** Capitalize every first char of a word
*/

char *my_strcapitalize(char *str)
{
	int i = 0;
	int word = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && word == 0)
		{
			str[i] = str[i] - 32;
			word = -1;
		}
		else if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			word = 0;
		i++;
	}
	return (str);
}
