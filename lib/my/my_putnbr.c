/*
** EPITECH PROJECT, 2017
** my put nbr
** File description:
** 
*/

int	my_put_nbr(int nb)
{
  if (nb <= 9)
    {
      my_putchar(nb + '0');
    }
  else if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  else
    {
      my_put_nbr(nb / 10);
      my_putchar(nb % 10 + '0');
    }
}
