# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:11:26 by dojeanno          #+#    #+#              #
#    Updated: 2023/04/22 15:38:51 by dojeanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

LIB			=	@ar rcs

SRCS		=	ft_printf.c\


OBJS		=	$(SRCS:.c=.o)

SRCS_BONUS	=	
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

ifdef WITH_BONUS	
OBJS_LIST = $(OBJS) $(OBJS_BONUS)
else
OBJS_LIST = $(OBJS)
endif

all :		$(NAME) 
	
$(NAME):	$(OBJS_LIST)
			$(LIB) $(NAME) $(OBJS_LIST)
		
bonus :		
			@make WITH_BONUS=1 all
		
clean :		
			$(RM) $(OBJS) $(OBJS_BONUS)
			
fclean :	clean
			$(RM) $(NAME)
			
re :		fclean all

.PHONY :	all bonus clean fclean re
