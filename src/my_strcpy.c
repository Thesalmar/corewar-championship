/*
** my_strcpy.c for my_strcpy in /home/come.lemargue/accomp
**
** Made by Côme Lemargue
** Login   <come.lemargue@epitech.eu>
**
** Started on  Mon Nov  7 15:37:01 2016 Côme Lemargue
** Last update Wed May  3 14:27:45 2017 thesalmar
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
