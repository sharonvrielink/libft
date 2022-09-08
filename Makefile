# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: svrielin <svrielin@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/16 13:32:03 by svrielin      #+#    #+#                  #
#    Updated: 2022/09/08 16:44:23 by svrielin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
HEADER_FILES 	:=	libft.h
CC				:=	gcc
CFLAGS			?=	-g -Wall -Wextra -Werror

#################################Project_files##################################
SRC_DIR			:=	./src
OBJ_DIR			:=	./obj
OBJ_FILES		:=	$(addprefix $(OBJ_DIR)/,ft_memset.o ft_bzero.o ft_memcpy.o\
ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o\
ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_atoi.o\
ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o\
ft_tolower.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o\
ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o\
ft_putendl_fd.o ft_putnbr_fd.o ft_numlen.o ft_unsignednumlen_base.o\
ft_ulltoa_base.o ft_strtoupper.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o\
ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o\
ft_create_empty_string.o ft_strndup.o get_next_line.o get_next_line_utils.o)

ifdef DEBUG
CFLAGS	+=	-g
NAME = libft_debug.a
endif

all: $(NAME)

# $@ filename of the target $^ all prerequisites
# r: uses replacement for the objects files while inserting the files member into archive
# c: create the library if it does not exist
$(NAME): $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)

# -p: if parent dirs do not exist, generate them to accommodate 
# gcc -c: compile but not link the file, makes the result an object file
# $< the first prerequisite
# gcc -o: name of the output file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# !!!!!!!!!!!!!!!DELETE MAIN AGAIN!!!!!!!!!!!!!!!!!
main: all
	$(CC) $(CFLAGS) main.c $(OBJ_FILES)

clean:
	@rm -f $(OBJ_FILES) 
	@rm -df $(OBJ_DIR)
	@echo "Object files and directory removed"

fclean: clean
	@rm -f $(NAME) a.out
	@rm -rf a.out.dSYM
	@echo "Library libft removed"

re: fclean all

#bonus rule just to use testers
bonus: all

.PHONY: clean fclean
