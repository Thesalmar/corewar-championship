/*
** EPITECH PROJECT, 2017
** my strlowcase
** File description:
** Put every single character into lowercase
*/

#include <stdlib.h>

char *my_strlowcase(char *str)
{
        int i = 0;
        while (str[i] != '\0')
        {
                i++;
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
        }
        if (str == NULL)
                return (0);
        return (str);
}
