/*
** EPITECH PROJECT, 2017
** strncpy
** File description:
** Copy the content of a string with n bytes
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
