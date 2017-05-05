# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rramirez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 01:09:45 by rramirez          #+#    #+#              #
#    Updated: 2017/05/04 17:41:53 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_db

CC		=	gcc

FLAG	=	-Wall -Wextra -Werror

SRCS	= 	main.c\
			check_user.c\
			user_len_chk.c\
			remove_user.c\
			rot_13.c\
			read_file.c\
			check_pass.c\
			choice_chk.c\
			edit_data.c\
			create_store.c\

OBJ =		${SRCS:.c=.o}

INCLUDE	=	-I ft_db.h -L ./libft -lft 

all: $(NAME)

$(OBJ):
	@$(CC) $(FLAG) -c $(SRCS)

$(NAME): $(OBJ)
	@make all -C libft
	@$(CC) $(FLAG) $(INCLUDE) $(OBJ) -o $(NAME)

clean:
	@make clean -C libft
	@/bin/rm -f $(OBJ)

fclean: clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
