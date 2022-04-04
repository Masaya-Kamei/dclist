vpath	%.c srcs

SRCS	=	dclst_addback.c dclst_addfront.c dclst_clear.c dclst_delone.c \
			dclst_exist.c dclst_last.c dclst_link.c dclst_new.c \
			dclst_new_addback.c dclst_new_addfront.c dclst_size.c

OBJSDIR	=	./objs
OBJS	=	$(addprefix $(OBJSDIR)/, $(SRCS:.c=.o))

INCLUDE	=	-I./includes
NAME	=	libdclist.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar rc
RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

$(OBJSDIR)/%.o	:	%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

address	:	CFLAGS += 	-g -fsanitize=address
address	:	re

leak	:	CC		=	/usr/local/opt/llvm/bin/clang
leak	:	CFLAGS += 	-g -fsanitize=leak
leak	:	re

.PHONY	:	all clean fclean re address leak
