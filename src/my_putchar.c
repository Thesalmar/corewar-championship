/*
** my_putchar.c for none in /home/thesalmar/EPITECH/save_code_important
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Tue Feb 21 12:15:34 2017 Côme Lemargue
** Last update Fri Apr 28 11:31:27 2017 thesalmar
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
