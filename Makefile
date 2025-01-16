# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 11:51:22 by rdedola           #+#    #+#              #
#    Updated: 2024/06/28 11:51:26 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE = push_swap

# Files
SRC =			./src/main.c \

SRC_PARSING =	./src/parsing/parser.c \
				./src/parsing/isnumber.c \
				./src/parsing/isduplicate.c \
				./src/parsing/isoverflow.c

SRC_UTILS =		./src/utils/ft_countwords.c \
				./src/utils/ft_split.c \
				./src/utils/ft_strcmp.c \
				./src/utils/ft_atoi.c \
				./src/utils/ft_lstnew.c \
				./src/utils/ft_lstlast.c \
				./src/utils/ft_lstsize.c \
				./src/utils/ft_lstfree.c \

SRC_LISTS =		./src/lists/init_stack.c \
				./src/lists/init_index.c \

SRC_MOVES =		./src/lists/moves/pa.c \
				./src/lists/moves/pb.c \
				./src/lists/moves/ra.c \
				./src/lists/moves/rb.c \
				./src/lists/moves/rr.c \
				./src/lists/moves/rra.c \
				./src/lists/moves/rrb.c \
				./src/lists/moves/rrr.c \
				./src/lists/moves/sa.c \
				./src/lists/moves/sb.c \
				./src/lists/moves/ss.c \

SRC_SORTING =	./src/sorting/sorter.c \
				./src/sorting/issorted.c \
				./src/sorting/simple_sort.c \
				./src/sorting/radix_sort.c \

SOURCES =		${SRC} ${SRC_PARSING} ${SRC_UTILS} ${SRC_LISTS} ${SRC_MOVES} ${SRC_SORTING}
OBJECTS =		${SOURCES:.c=.o}

# Variables
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -g3 -fsanitize=address
RM		= rm -f

# Loading Bar
RESET		= \e[0m
UP			= \e[A

WHITE		= \e[0;1;97m
_WHITE		= \e[1;4;97m
RED			= \e[0;1;31m
GREEN		= \e[0;1;32m
_GREEN		= \e[1;4;32m

FILE_COUNT	= 0
FILE_TOTAL	= 30
BAR_SIZE	= ${shell expr 100 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_LOAD	= ${shell expr 23 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_REST	= ${shell expr 23 - ${BAR_LOAD}}

# Makefile
all:		${EXE}

${EXE}:		${OBJECTS}
		@${CC} ${CFLAGS} ${OBJECTS} -o ${EXE}
		@echo "\n\n${GREEN}[✓] - ${_GREEN}Push Swap${GREEN} Successfully Compiled!${RESET}"

%.o:		%.c
		@${eval FILE_COUNT = ${shell expr ${FILE_COUNT} + 1}}
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${WHITE}[!] - Compilation loading...${RESET}"
		@printf "${WHITE}[${GREEN}%-.${BAR_LOAD}s${RED}%-.${BAR_REST}s${WHITE}] [%d/%d (%d%%)]${RESET}" "#######################" "#######################" ${FILE_COUNT} ${FILE_TOTAL} ${BAR_SIZE}
		@echo ""
		@echo "${UP}${UP}${UP}"

clean:
		@${RM} ${OBJECTS}
		@echo "${WHITE}[!] - ${_WHITE}Push Swap${WHITE} Successfully Cleaned!${RESET}"

fclean: clean
		@${RM} ${OBJECTS} ${EXE}
re:			fclean all

.PHONY: all clean fclean re