/*
** my_strdup.c for none in /home/thesalmar/EPITECH/save_code_important
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Tue Feb 21 11:56:20 2017 Côme Lemargue
** Last update Fri Apr 28 13:33:51 2017 thesalmar
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str);

char    *my_strdup(char *str)
{
  int   len;
  int   i;
  char  *dup;

  i = 0;
  if (str != NULL)
    {
      len = my_strlen(str);
      dup = malloc(sizeof(char) * len);
      if (dup != NULL)
	{
	  while (str[i] != '\0')
	    {
	      dup[i] = str[i];
	      i = i + 1;
	    }
	}
      return (dup);
    }
  return (NULL);
}
