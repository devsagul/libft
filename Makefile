# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbalon-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 18:05:26 by mbalon-s          #+#    #+#              #
#    Updated: 2018/12/27 19:37:08 by mbalon-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
TARGET = $(NAME).a
HEADER = $(NAME).h

SRCS = $(shell find . -type f -name "*.c")
OBJ = $(notdir $(SRCS:.c=.o))
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HEADER) $(SRCS)
	gcc $(FLAGS) -I. -c $(SRCS)
	ar -rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
