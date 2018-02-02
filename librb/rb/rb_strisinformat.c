/*
** EPITECH PROJECT, 2018
** Bootcamp Rebirth
** File description:
** rb_strisinformat
*/

#include <unistd.h>
#include <stdio.h>

int rb_strisinformat(char *str, char *format)
{
	int i = 0;
	int j = 0;
	if (str == NULL)
	{
		write(2, "Error: rb_strisinformat : String pointer is NULL\n", 50);
		return (84);
	}
	while (str[i] != '\0' && format[j] != '\0')
	{
		if (str[i] == format[j])
		{
			i++;
			return (1);
		}
		j++;
	}
	return (0);
}

int main(void)
{
	char *str = "nenufar avec un f";
	char *format1 = "abcdefghijklmnopqrstuvwxyz";
	char *format2 = "abcdef 012345";

	printf("La phrase %s est composee de lettre comprise dans l'alphabet [%s]\n%d\n", str, format1, rb_strisinformat(str, format1));
	printf("La phrase %s est pas composee de lettre comprise dans l'alphabet [%s]\n%d\n", str, format2, rb_strisinformat(str, format2));
	rb_strisinformat(NULL, format1);
	return (0);
}
