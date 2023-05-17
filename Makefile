server	=	server
client	=	client

SRCS	=	server.c
SRCC	=	client.c

OBJSS	=	${SRCS:%.c=%.o}
OBJSC	=	${SRCC:%.c=%.o}

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
LIBFT	=	./libft/libft.a

RM	=	rm -rf

all: ${server} ${client}

${server}: ${OBJSS}
	@echo "\033[0;33m\nCOMPILING LIBFT\n"
	@${MAKE} -C ./libft
	@echo "\033[1;32m\nLIBFT CREATED\n"
	@echo "\033[0;33m\nCOMPILING SERVER\n"
	@${CC} ${CFLAGS} ${OBJSS} ${LIBFT} -o ${server}
	@echo "\033[1;32m\nSERVER CREATED\n"

${client}: ${OBJSC}
	@echo "\033[0;33m\nCOMPILING CLIENT\n"
	@${CC} ${CFLAGS} ${OBJSC} ${LIBFT} -o ${client}
	@echo "\033[1;32m\n CLIENT CREATED\n"

clean:
	@echo "\033[0;31m\n DELETING LIBFT SERVER & CLIENT files ....\n"
	@${MAKE} clean -C ./libft fclean
	@${RM} ${OBJSS}
	@${RM} ${OBJSC}
	@echo "\033[1;32m\nDONE\n"

fclean: clean
	@echo "\033[0;31mDELETING SERVER & CLIENT EXECUTABLE....\n"
	@${RM} ${server}
	@${RM} ${client}
	@echo "\033[1;32m\nDONE\n"

re: fclean all
