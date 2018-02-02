/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** strcmp look alike
*/

int my_strcmp(char const *s1, char const *s2)
{
	int inc = 0;

	while (s1[inc] == s2[inc] && s1[inc] != '\0' && s1[inc] != '\0')
		inc++;
	return (s1[inc] - s2[inc]);
}
