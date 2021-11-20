# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 13:27:04 by ren-nasr          #+#    #+#              #
#    Updated: 2021/11/20 19:20:06 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




LIBFT		= 	./libft
LIBNAME		= 	libft.a
NAME 		= 	libftprintf.a
LIBFTPR		= 	ft_printf.h 
CFLAGS		= 	-Wall -Werror -Wextra -c
RM			= 	rm -f
AR			= 	ar -rcs
FILES		= 	ft_printf.c \
				ft_printf_char.c \
				ft_printf_str.c \
				ft_printf_ptr.c \
				ft_printf_hex.c \
				ft_printf_int.c \
				ft_printf_dun.c \
				ft_printf_utils.c
OBJ			= 	$(FILES:.c=.o)

all: $(NAME)
# Compile libft files with Makefile of the dir 
# Copy the libft.a content to libftprintf.a 
# Compile ft_printf files and add content to libftprintf.a
$(NAME): ${OBJ} ${LIBFTPR}
	@$(MAKE) -C $(LIBFT) 
	@cp $(LIBFT)/$(LIBNAME) $(NAME)
	@$(CC) $(CFLAGS) $(FILES)
	@$(AR) $(NAME) $(OBJ)


clean:
	@$(RM) $(OBJ)
	@$(MAKE) -C $(LIBFT) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT) fclean


re: fclean all

.PHONY: all clean fclean re t