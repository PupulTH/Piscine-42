#----Variables declaration---
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(INCLDIR)
NAME = rush-02
SRCDIR = ./
INCLDIR = ./
#Wildcard will evaluate each srcs who finishes with .c
SRCS = ft_parse_line.c \
ft_files.c \
ft_parse_file.c \
ft_split.c \
ft_strings.c \
ft_list.c \
ft_parse_args.c \
ft_print.c \
convert.c \
convert2.c \
convert3.c \
main.c
#This syntax says that we take the variable SRCS
#and replace the string .c with .o (so evaluates all .o)
OBJ = $(addprefix $(SRCDIR), $(SRCS:.c=.o))

#--------Rules------

#$< = dependancy currently evaluated
$%.o: %.c
	$(CC) $(CFLAGS) -c -o $@

#$@ = rulename
#$^ = all dependancies
$(NAME): $(OBJ)
	$(CC) $^ -o $(NAME)

all: $(NAME)

#Have to use rm -f to force rm to push through even if file doesn't exists
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

#Rules
#PHONY = force rebuild for all dependancies
.PHONY: clean fclean re all