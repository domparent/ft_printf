# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:11:26 by dojeanno          #+#    #+#              #
#    Updated: 2023/04/27 19:00:54 by dojeanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

LIB			=	@ar rcs

SRCS		=	ft_printf.c\
				ft_print_char.c\
				ft_print_number.c\
				ft_print_hexa.c\

OBJS_LIST	=   $(SRCS:.c=.o)

all: 		$(NAME)
			
$(NAME):	$(OBJS_LIST)
			$(LIB) $(NAME) $(OBJS_LIST)
			
clean :		
			$(RM) $(OBJS_LIST) 
	
fclean :	clean
			$(RM) $(NAME) 
	
re :		fclean all

.PHONY :	all clean fclean re 
