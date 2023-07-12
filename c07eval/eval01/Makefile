.PHONY: all clean  ex00 ex01 ex02 ex03 ex04 ex05

CC = cc

all: ex00 ex01 ex02 ex03 ex04 ex05

clean:
	rm -f *.out
	rm -f */*.out

norm:	
	norminette ex00 ex01 ex02 ex03 ex04 ex05

ex00:	ex00/ft_strdup.c main/main00.c	
	$(CC) -o ex00.out ex00/ft_strdup.c main/main00.c

ex01:	ex01/ft_range.c main/main01.c	
	$(CC) -o ex01.out ex01/ft_range.c main/main01.c

ex02:	ex02/ft_ultimate_range.c main/main02.c	
	$(CC) -o ex02.out ex02/ft_ultimate_range.c main/main02.c

ex03:	ex03/ft_strjoin.c main/main03.c	
	$(CC) -o ex03.out ex03/ft_strjoin.c main/main03.c

ex04:	ex04/ft_convert_base.c ex04/ft_convert_base2.c main/main04.c	
	$(CC) -o ex04.out ex04/ft_convert_base.c ex04/ft_convert_base2.c main/main04.c

ex05:	ex05/ft_split.c main/main05.c	
	$(CC) -o ex05.out ex05/ft_split.c main/main05.c

