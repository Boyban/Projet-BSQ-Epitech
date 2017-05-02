/*
** my_strlen.c for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 15:02:14 2016 Yohan Lequere
** Last update Wed Dec 14 16:49:27 2016 Yohan Lequere
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	tall_line(char *str, int i)
{
  while (str[i] != '\n')
    {
      i = i + 1;
    }
  return (i);
}
