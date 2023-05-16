# E89 Pedagogical & Technical Lab
# project:     tp_getline
# created on:  2023-02-21 - 09:40 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

PROJ		=	libsplit.a

NAME		=	$(PROJ).out

ARCH_NAME	=	$(PROJ).a

MAIN		=	src/main.c

SRCS		=	$(shell find src/ -name "*.c" ! -name "main.c" ! -name "*#*")

OBJS		=	$(SRCS:.c=.o)

MAIN_OBJ	=	$(MAIN:.c=.o)

TTNAME		=	test.out

TTSRCS		=	$(shell find test/ -name "*.c")

TTOBJS		=	$(TTSRCS:.c=.o)

IFLAGS		=	-Iinclude/ -Imemuse/include/

CFLAGS		+=	-W -Wall -Wextra -Werror $(IFLAGS)

LDFLAGS		+=

CC			:=	gcc

ARRC		:=	ar rc


ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

%.o: %.c
	@printf	"[\033[0;36mCompilation\033[0m]% 36s\r" $<  | tr " " "."
	@$(CC) -c -o $@ $< $(CFLAGS)
	@printf "[\033[0;32mCompiled\033[0m]% 40s\n" $< | tr " " "."

all:$(PROJ)

$(PROJ):$(OBJS) $(MAIN_OBJ)
	@printf "\033[0;36mObjets Compilés avec Succès!\033[0m\n"
	$(ARRC) $(ARCH_NAME) $(OBJS)
	@printf "\033[0;36mArchive Compilés avec Succès!\033[0m\n"

$(NAME): $(PROJ)
	$(CC) -o $(NAME) $(MAIN_OBJ)  $(OBJS) $(LDFLAGS)
	@printf "\033[1;32m%s Compilés avec Succès!\033[0m\n\n" $(NAME)

#$(NAME):$(OBJS)
#	@printf "\033[0;36mObjets Compilés avec Succès!\033[0m\n"
#	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(NAME)
#	@printf "\033[1;32mCompilation finie  avec Succès!\033[0m\n"

$(TTNAME):$(OBJS) $(TTOBJS)
	@printf "\033[0;36mObjets Compilés avec Succès!\033[0m\n"
	$(CC) -o $(TTNAME) $(TTOBJS) $(OBJS) $(LDFLAGS) -lcriterion
	@printf "\033[1;32mTests Compilés avec Succès!\033[0m\n"

RVM	=	rm -vf

RM	=	rm -f

clean:
	@printf "[\033[31mSuppression\033[m][Objets]% 28d\n" `$(RVM) $(OBJS) $(MAIN_OBJ) $(TTOBJS) | wc -l` | tr " " "."

fclean: clean
	@printf "[\033[31mSuppression\033[m][Exe]% 31s\n" `$(RM) $(NAME)` '$(NAME)' | tr " " "."
	@printf "[\033[31mSuppression\033[m][Tests]% 29s\n" `$(RM) $(TTNAME)` '$(TTNAME)' | tr " " "."
	@printf "[\033[31mSuppression\033[m][Archive]% 27s\n" `$(RM) $(ARCH_NAME)` '$(ARCH_NAME)' | tr " " "."

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
