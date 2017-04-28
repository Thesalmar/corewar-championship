/*
** my_putstr2.c for none in /home/thesalmar/EPITECH/save_code_important
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Wed Feb 22 10:36:52 2017 Côme Lemargue
** Last update Fri Apr 28 13:33:23 2017 thesalmar
*/

#include <unistd.h>

void	my_putchar(char c);

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  if (str == NULL)
    {
      return ;
    }

  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
