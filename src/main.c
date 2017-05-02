/*
** main.c for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 12:21:40 2016 Yohan Lequere
** Last update Thu Dec 15 13:58:43 2016 Yohan Lequere
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int     dump_map(int ac, char **av, char *str)
{
  int   fd;
  int   size;
  char  buffer[4096];
  int	i;
  int	compt;
  int	tmp;

  size = 1;
  fd = open(av[ac - 1], O_RDONLY);
  i = 0;
  if (fd == -1)
    return (84);
  while (size != 0)
    {
      compt = 0;
      size = read(fd, buffer, 4096);
      tmp = size;
      while (tmp > 0)
	{
	  str[i] = buffer[compt];
	  i = i + 1;
	  compt = compt + 1;
	  tmp = tmp - 1;
	}
    }
}

char    *back(char *str)
{
  while (*str != '\n')
    str = str + 1;
  str = str + 1;
  return (str);
}

int	the_alloc(char *str)
{
  int	i;
  int	count;
  int	modul;
  
  i = 0;
  modul = 1;
  count = 0;
  while (str[i] != '\n')
    {
      i = i + 1;
    }
  i = i - 1;
  while (i >= 0)
    {
      count = count + ((str[i] - 48) * modul);
      i = i - 1;
      modul = modul * 10;
    }
  return (count);
}

int	main(int ac, char **av)
{
  struct stat   file_stat;
  char	*str;
  char	**tab;
  int	count;

  if (ac != 2)
    return (84);
  stat(av[1], &file_stat);
  str = malloc(sizeof(char *) * file_stat.st_size);
  dump_map(ac, av, str);
  count = the_alloc(str);
  str = back(str);
  bsq(str, count);
}
