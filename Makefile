# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: semasgin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 15:47:21 by semasgin          #+#    #+#              #
#    Updated: 2019/04/29 16:24:46 by semasgin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJ = *.o

all: $(NAME)

$(OBJ): $(FILES)
	gcc -Wall -Wextra -Werror -c $(FILES)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f  $(NAME)

re: fclean all
