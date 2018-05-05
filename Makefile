# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/03 10:05:46 by mlewis-l          #+#    #+#              #
#    Updated: 2018/05/03 11:50:53 by mlewis-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

O_FILES = *.o

FLAG = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPT) $(SRC)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
