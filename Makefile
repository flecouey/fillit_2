# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flecouey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 12:38:34 by flecouey          #+#    #+#              #
#    Updated: 2018/04/01 16:17:45 by flecouey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
LIB_NAME = libft.a

FIL_DIR = fillit_srcs
LIB_DIR = libft_srcs

FIL_SRCS = ft_check_arrangement.c \
		   ft_check_blocksnb.c \
		   ft_check_squaresnb.c \
		   ft_check_validchars.c \
		   ft_fillit.c \
		   ft_issafe.c \
		   ft_isvalid.c \
		   ft_nbtetri.c \
		   ft_placepiece.c \
		   ft_printoutput.c \
		   ft_readfile.c \
		   ft_removepiece.c \
		   ft_taballoc.c \
		   ft_tetrindex.c \
		   main.c

LIB_SRCS = ft_atoi.c \
		   ft_bzero.c \
		   ft_divmod.c \
		   ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_islower.c \
		   ft_isprint.c \
		   ft_isupper.c \
		   ft_itoa.c \
		   ft_memalloc.c \
		   ft_memccpy.c \
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_memcpy.c \
		   ft_memdel.c \
		   ft_memmove.c \
		   ft_memset.c \
		   ft_nextsquare.c \
		   ft_npower.c \
		   ft_putchar.c \
		   ft_putchar_fd.c \
		   ft_putendl.c \
		   ft_putendl_fd.c \
		   ft_putnbr.c \
		   ft_putnbr_fd.c \
		   ft_putnstr.c \
		   ft_putstr.c \
		   ft_putstr_fd.c \
		   ft_strcat.c \
		   ft_strchr.c \
		   ft_strclr.c \
		   ft_strcmp.c \
		   ft_strcpy.c \
		   ft_strdel.c \
		   ft_strdup.c \
		   ft_strequ.c \
		   ft_striter.c \
		   ft_striteri.c \
		   ft_strjoin.c \
		   ft_strlcat.c \
		   ft_strlen.c \
		   ft_strmap.c \
		   ft_strmapi.c \
		   ft_strncat.c \
		   ft_strncmp.c \
		   ft_strncpy.c \
		   ft_strnequ.c \
		   ft_strnew.c \
		   ft_strnstr.c \
		   ft_strrchr.c \
		   ft_strsplit.c \
		   ft_strstr.c \
		   ft_strsub.c \
		   ft_strtrim.c \
		   ft_strwcount.c \
		   ft_strwindex.c \
		   ft_strwleni.c \
		   ft_strwlenn.c \
		   ft_tablen.c \
		   ft_tolower.c \
		   ft_toupper.c

FIL_OBJS = $(FIL_SRCS:.c=.o)
LIB_OBJS = $(LIB_SRCS:.c=.o)

FIL_INC = $(addprefix $(FIL_DIR)/, fillit.h)
LIB_INC = $(addprefix $(LIB_DIR)/, libft.h)

FIL_SRCS_ = $(addprefix $(FIL_DIR)/, $(FIL_SRCS))
LIB_SRCS_ = $(addprefix $(LIB_DIR)/, $(LIB_SRCS))


all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(LIB_SRCS_) -I $(LIB_INC)
	ar rc $(LIB_NAME) $(LIB_OBJS)
	gcc -Wall -Wextra -Werror -c $(FIL_SRCS_) -I $(FIL_INC)
	gcc $(FIL_OBJS) -L. -lft -o $(NAME)

clean:
	rm -f $(LIB_OBJS) $(FIL_OBJS)

fclean: clean
	rm -f $(LIB_NAME) $(NAME)

re : fclean all
