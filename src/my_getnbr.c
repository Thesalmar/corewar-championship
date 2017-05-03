/*
** my_getnbr.c for none in /home/thesalmar/EPITECH/save_code_important
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Tue Feb 21 11:58:32 2017 Côme Lemargue
** Last update Wed May  3 14:27:09 2017 thesalmar
*/

int	my_getnbr(char *str)
{
  int   i;
  int   final;

  i = 0;
  final = 0;
  while (str[i] != '\0')
    {
      final = final * 10;
      final = (str[i] - 48) + final;
      i = i + 1;
    }
  return (final);
}
