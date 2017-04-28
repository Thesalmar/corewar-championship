/*
** my_putnbr.c for none in /home/thesalmar/EPITECH/save_code_important
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Tue Feb 21 12:11:40 2017 Côme Lemargue
** Last update Fri Apr 28 11:31:13 2017 thesalmar
*/

void	my_putchar(char c);

int	my_putnbr(int nb)
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
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + '0');
    }
}
