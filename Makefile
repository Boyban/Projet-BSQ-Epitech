##
## Makefile for  in /home/Yohan/C_Prog_Elem/CPE_2016_BSQ
## 
## Made by Yohan Lequere
## Login   <Yohan@epitech.net>
## 
## Started on  Wed Dec 14 19:54:29 2016 Yohan Lequere
## Last update Sat Dec 17 18:29:44 2016 Yohan Lequere
##

NAME	=	bsq

SRC	=	./src/bsq.c			\
		./src/check_firstline.c		\
		./src/main.c			\
		./src/my_strlen.c		\
		./src/my_str_to_wordtab.c	\
		./src/my_show_tab.c	

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(SRC)	
	gcc -I ./include $(SRC) -o $(NAME) -O2

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re: clean fclean
	gcc -I ./include $(SRC) -o $(NAME)

.PHONY:	clean fclean re all
