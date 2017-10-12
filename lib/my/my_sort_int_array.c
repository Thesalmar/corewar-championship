/*
** EPITECH PROJECT, 2017
** my sort int array
** File description:
** Sort integer in ascending order
*/

void my_sort_int_array(int *tab, int size)
{
  int inc1;
  int inc2;
  int box_a;
  int box_b;

  inc1 = 0;
  inc2 = 1;
  box_a = 0;
  box_b = 0;
  while (inc1 < size)
    {
      inc1++;
      while (inc2 < (size - 1))
	{
	  inc2++;
	  if (tab[inc1]>tab[inc1 + inc2])
	    {
	      box_a = tab[inc1];
	      box_b = tab[inc1 + inc2];
	      tab[inc1] = box_b;
	      tab[inc1 + inc2] = box_a;
	    }
	}
    }
}
