# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:11:26 by dojeanno          #+#    #+#              #
#    Updated: 2023/04/25 17:07:35 by dojeanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFTPATH	=	libft/

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

LIB			=	@ar rcs

SRCS		=	ft_printf.c\


OBJS_LIST		=	$(SRCS:.c=.o)

all: 		libft $(NAME) 
	
$(NAME):	$(OBJS_LIST) 
			$(LIB) $(NAME) $(OBJS_LIST) 

libft :		
			make -C $(LIBFTPATH)
clean :		
			$(RM) $(OBJS_LIST) 
			make -C $(LIBFTPATH) clean

			
fclean :	clean
			$(RM) $(NAME) 
			make -C $(LIBFTPATH) fclean

			
re :		fclean all

.PHONY :	all clean fclean re libft
