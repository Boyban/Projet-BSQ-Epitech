/*
** check_firstline.c for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 19:15:44 2016 Yohan Lequere
** Last update Wed Dec 14 19:50:18 2016 Yohan Lequere
*/

#include "my.h"

t_my_bsq	on_buffer(t_my_bsq buffer, int **arr, int j, int i)
{
    buffer.val = arr[j][i];
    buffer.line = j;
    buffer.col = i;
    return (buffer);
}

t_my_bsq	check_firstline(t_my_bsq buffer, int **arr)
{
  int		i;

  i = 0;
  while (arr[0][i] == 0)
    {
      i = i + 1;
    }
  if (arr[0][i] == 1)
    {
      buffer.val = 1;
      buffer.line = 0;
      buffer.col = i;
    }
  return (buffer);
}
