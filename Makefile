NAME = push_swap

SRC = main.c ft_utils/ft_atol.c ft_utils/ft_countsubstr.c ft_utils/ft_handleargs.c ft_utils/ft_calloc.c \
      ft_utils/ft_isvalidarg.c ft_utils/ft_split.c ft_utils/ft_utils.c \
      ft_rules/push.c ft_rules/swap.c ft_rules/rotate.c ft_rules/revrotate.c \
      ft_utils/ft_initiatesort.c ft_utils/ft_issorted.c ft_utils/ft_checkdup.c \
      ft_utils/ft_maxindex.c ft_utils/ft_minindex.c \
      ft_utils/ft_strjoin.c ft_utils/ft_strlen.c ft_utils/ft_strdup.c ft_utils/ft_freestrings.c ft_utils/ft_safefree.c \
      ft_utils/ft_sortuptofive.c ft_utils/ft_get_median.c ft_utils/ft_duparray.c ft_utils/ft_sortuntil19.c ft_utils/sort19helper.c \
      ft_utils/ft_pushsortb.c ft_utils/ft_processchunk.c ft_utils/initiatesort.c ft_utils/helpersortall.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
