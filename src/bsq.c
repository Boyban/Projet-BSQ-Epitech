/*
** bsq.c for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 14:34:15 2016 Yohan Lequere
** Last update Thu Dec 15 18:00:52 2016 Yohan Lequere
*/

#include <stdlib.h>
#include "my.h"

t_my_bsq        check_firstline(t_my_bsq buffer, int **arr);
t_my_bsq        on_buffer(t_my_bsq buffer, int **arr, int j, int i);

int	cond(int **arr, int j, int i)
{
  int	high;
  int	left;
  int	high_left;

  if (i == 0)
    return (1);
  else
    {
      high = arr[j - 1][i];
      left = arr[j][i - 1];
      high_left = arr[j - 1][i - 1];
      if (high <= left && high <= high_left)
	return (high + 1);
      else if (left <= high && left <= high_left)
	return (left + 1);
      else
	return (high_left + 1);
    }
}

t_my_bsq	dump_arr(t_my_bsq buffer, char **tab, int **arr)
{
  int		i;
  int		j;

  j = 1;
  buffer = check_firstline(buffer, arr);
  while (tab[j] != '\0')
    {
      i = 0;
      arr[j] = malloc(sizeof(int *) * my_strlen(tab[j]) + 1);
      while (tab[j][i] != '\0')
	{
	  if (tab[j][i] == '.')
	    arr[j][i] = cond(arr, j, i);
	  else if (tab[j][i] == 'o')
	    arr[j][i] = 0;
	  if (buffer.val < arr[j][i])
	    buffer = on_buffer(buffer, arr, j, i);
	  i = i + 1;
	}
      j = j + 1;
    }
  return (buffer);
}

int	**dump_line(char **tab, int **arr)
{
  int	i;

  i = 0;
  arr[0] = malloc(sizeof(int *) * my_strlen(tab[0]));
  while (tab[0][i] != '\n')
    {
      if (tab[0][i] == 'o')
	arr[0][i] = 0;
      else if (tab[0][i] == '.')
	arr[0][i] = 1;
      i = i + 1;
    }
  return (arr);
}

char	**put_x(char **tab, t_my_bsq buffer)
{
  int	val_line;
  int	val_col;
  int	j;
  int	i;

  val_line = buffer.val;
  j = buffer.line;
  while (val_line != 0)
    {
      i = buffer.col;
      val_col = buffer.val;
      while (val_col != 0)
	{
	  tab[j][i] = 'x';
	  i = i - 1;
	  val_col = val_col - 1;
	}
      val_line = val_line - 1;
      j = j - 1;
    }
  return (tab);
}

int		bsq(char *str, int count)
{
  char		**tab;
  int		**arr;
  t_my_bsq	buffer;

  buffer.val = 0;
  tab = my_str_to_wordtab(str, tab, arr, count);
  arr = malloc(sizeof(int **) * 10000);
  arr = dump_line(tab, arr);
  buffer = dump_arr(buffer, tab, arr);
  tab = put_x(tab, buffer);
  my_show_tab(tab);
}
