/*
** my_swap.c for my_swap in /home/come.lemargue/delivery/CPool_Day04
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Tue Oct 18 09:30:55 2016 Côme Lemargue
** Last update Fri Apr 28 11:47:53 2017 thesalmar
*/

void	my_putchar(char c);

int	my_putnbr(int nb);

int	my_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

  my_putnbr(*a);
  my_putchar('\n');
  my_putnbr(*b);
  return (0);
}
