/*
** my_show_tab.c for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 14:54:22 2016 Yohan Lequere
** Last update Thu Dec 15 15:16:07 2016 Yohan Lequere
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int	my_show_tab(char **tab)
{
  int	j;
  int	i;

  j = 0;
  while (tab[j] != '\0')
    {
      my_putstr(tab[j]);
      j = j + 1;
    }
}
