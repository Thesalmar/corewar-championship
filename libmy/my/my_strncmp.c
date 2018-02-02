/*
** EPITECH PROJECT, 2017
** my strncmp
** File description:
** Same thing than strcmp but the n is the limit
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
        int inc = 0;

	while (inc < n)
	{
		while (s1[inc] == s2[inc] && s1[inc] != '\0' && s1[inc] != '\0')
			inc++;
	}
        return (s1[inc] - s2[inc]);
}
