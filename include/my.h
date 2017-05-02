/*
** my.h for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ/include
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 18:39:29 2016 Yohan Lequere
** Last update Thu Dec 15 13:59:14 2016 Yohan Lequere
*/

#ifndef MY_H_
# define MY_H_

typedef struct          s_my_bsq
{
  int			val;
  int                   line;
  int                   col;
}                       t_my_bsq;

t_my_bsq        check_firstline(t_my_bsq buffer, int **arr);
t_my_bsq	on_buffer(t_my_bsq buffer, int **arr, int j, int i);
int		cond(int **arr, int j, int i);
t_my_bsq        dump_arr(t_my_bsq buffer, char **tab, int **arr);
int		**dump_line(char **tab, int **arr);
char		**put_x(char **tab, t_my_bsq buffer);
int		my_show_tab(char **tab);
void		my_putchar(char c);
char		**my_str_to_wordtab(char *str, char **tab, int **in, int count);
int		tall_line(char *str, int i);
int		my_strlen(char *str);
int             bsq(char *str, int count);

#endif /* !MY_H_ */
