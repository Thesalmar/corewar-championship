/*
** my_strlen.c for my_strlen in /home/come.lemargue/delivery/CPool_Day04
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Wed Oct 19 08:13:23 2016 Côme Lemargue
** Last update Tue Feb 21 12:10:27 2017 Côme Lemargue
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
