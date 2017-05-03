/*
** my_strlen.c for my_strlen in /home/come.lemargue/delivery/CPool_Day04
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Wed Oct 19 08:13:23 2016 Côme Lemargue
** Last update Wed May  3 14:28:08 2017 thesalmar
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
