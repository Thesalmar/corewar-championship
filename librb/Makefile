##
## EPITECH PROJECT, 2018
## Bootcamp Rebirth
## File description:
## Librb.a
##

NAME	= librb.a

CC	= ar rc

RM	= rm -f

SRCS	= ./rb/count_words.c \
	  ./rb/my_putstr.c \
	  ./rb/my_strlen.c \
	  ./rb/my_swap.c \
	  ./rb/rb_print_err.c \
	  ./rb/rb_putstr.c \
	  ./rb/rb_strisinformat.c \
	  ./rb/rb_strlen.c \
	  ./rb/rb_strlowcase.c \
	  ./rb/rb_strupcase.c \
	  ./rb/rb_xerror.c 

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) .*~
	$(RM) *~
	$(RM) \#*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
