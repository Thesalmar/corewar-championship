/*
** EPITECH PROJECT, 2017
** my strstr
** File description:
** 
*/

#include <stdlib.h>

int	my_compare(char *str, char *to_find){
	int i = 0;
	while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
		i = i + 1;
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char *my_strstr(char *str, char *to_find){
	int i = -1;
	while (str[++i] != '\0'){
		if (str[i] == to_find[0] && my_compare(&str[i], to_find))
			return (&str[i]);
	}
	return (NULL);
}
