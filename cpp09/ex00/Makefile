# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 16:17:29 by kgebski           #+#    #+#              #
#    Updated: 2023/07/12 12:35:32 by kgebski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
CFLAGS	= -Wall -Wextra -pedantic -std=c++98 -g
SRCDIR	= src
INCDIR	= inc
OBJDIR	= obj
SRC		= src/main.cpp src/BitcoinExchange.cpp
			
OBJ		= $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
NAME	= btc

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