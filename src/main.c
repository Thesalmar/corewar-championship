/*
** main.c for lib project in /home/thesalmar/GITHUB/epitech-libproject
** 
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
** 
** Started on  Fri Apr 28 11:50:22 2017 thesalmar
** Last update Wed May  3 14:26:43 2017 thesalmar
*/

#include <unistd.h>

void	my_putstr(char *str);

int	main()
{
  int	pid;
  if ((pid = fork()) == 0)
    {
      my_putstr("Generating lib...\n");
    }
  else
    my_putstr("Lib generated !\n");
  return (0);
}
