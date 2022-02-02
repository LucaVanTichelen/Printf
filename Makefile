# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 12:02:35 by lvan-tic          #+#    #+#              #
#    Updated: 2022/01/23 12:02:39 by lvan-tic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c		\
			ft_putstr.c		\
			ft_numbers.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LIB		=	libftprintf.h

RM		=	rm -f

all		:	
			@make $(NAME)

$(NAME)	:	$(OBJS)
			@ar -rc $(NAME) $(OBJS)

clean	:	
			@$(RM) $(OBJS)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all