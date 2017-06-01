/*
** my_realloc.c for get_next_line in /home/thesalmar/EPITECH/CPE_2016_getnextline
** 
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
** 
** Started on  Fri May 26 17:01:49 2017 thesalmar
** Last update Thu Jun  1 15:17:24 2017 thesalmar
*/

int	my_realloc(int size, char *str1)
{
  char	*str2;
  int	i;

  if ((str2 = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  if (str1 == NULL || size < 1)
    return (NULL);
  while (i != size && str1[i] != '\0')
    {
      str2[i] = str1[i];
      i++;
    }
  free(str1);
  return (str2); 
}
