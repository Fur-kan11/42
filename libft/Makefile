NAME	=	libft.a

SRCS	=	ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			
			
			

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re