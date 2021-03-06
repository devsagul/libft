# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 18:05:26 by mbalon-s          #+#    #+#              #
#    Updated: 2019/01/31 17:37:40 by mbalon-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = $(NAME:.a=.h)

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstlength.c \
	   ft_queuecreate.c \
	   ft_queueappend.c \
	   ft_queuepop.c \
	   ft_queuefree.c \
	   ft_stackcreate.c \
	   ft_stackadd.c \
	   ft_stackpop.c \
	   ft_stackfree.c \
	   ft_iround.c \
	   ft_imatrixtheta.c \
	   ft_imatrixidentity.c \
	   ft_imatrixget.c \
	   ft_imatrixset.c \
	   ft_imatrixadd.c \
	   ft_imatrixsub.c \
	   ft_imatrixmul.c \
	   ft_imatrixtranspose.c \
	   ft_imatrixfree.c \
	   ft_fmatrixtheta.c \
	   ft_fmatrixidentity.c \
	   ft_fmatrixget.c \
	   ft_fmatrixset.c \
	   ft_fmatrixadd.c \
	   ft_fmatrixsub.c \
	   ft_fmatrixmul.c \
	   ft_fmatrixtranspose.c \
	   ft_fmatrixfree.c \
	   ft_fmatrix2imatrix.c \
	   ft_imatrix2fmatrix.c \
	   ft_murmurhash.c \
	   ft_murmurhashz.c

OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -I. -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
