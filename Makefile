# E89 Pedagogical & Technical Lab
# project:     tp_getline
# created on:  2023-02-21 - 09:40 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

NAME	=	libsplit.a

SRCS	=	$(shell find src/ -name "*.c")

OBJS	=	$(SRCS:.c=.o)

NAME_TEST	=	test.out

SRCS_TEST	=	$(shell find test/ -name "*.c")

OBJS_TEST	=	$(SRCS_TEST:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

save:
	git status
	git add *
	git commit -m "SPLIT"
	git push

test:
	$(CC) $(CFLAGS)

clear:
	rm src/*.c~ include/*.h~ test/*.c~ Makefile~

clean:
	@$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	@$(RM) $(NAME) $(NAME_TEST)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
