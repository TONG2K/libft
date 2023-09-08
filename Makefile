# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 19:53:10 by jikarunw          #+#    #+#              #
#    Updated: 2023/09/05 22:29:41 by jikarunw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRCS			=	$(wildcard *.c)
SRCS_BONUS		=	$(wildcard *.c)

OBJS			= 	$(SRCS:.c=.o)
OBJS_BONUS		=	$(SECS_BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(OBJS_BONUS)
				ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY:			all clean fclean re bonus
