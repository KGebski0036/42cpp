# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: student42 <student42@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 16:17:29 by kgebski           #+#    #+#              #
#    Updated: 2023/07/13 18:16:24 by student42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
CFLAGS	= -Wall -Wextra -pedantic -std=c++98 -g -O3
SRCDIR	= src
INCDIR	= inc
OBJDIR	= obj
SRC		= src/main.cpp src/PmergeMe.cpp
			
OBJ		= $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
NAME	= PmergeMe

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