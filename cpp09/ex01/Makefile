# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 16:17:29 by kgebski           #+#    #+#              #
#    Updated: 2023/07/13 12:13:22 by kgebski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
CFLAGS	= -Wall -Wextra -pedantic -std=c++98 -g
SRCDIR	= src
INCDIR	= inc
OBJDIR	= obj
SRC		= src/main.cpp src/RPN.cpp
			
OBJ		= $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
NAME	= RPN

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re