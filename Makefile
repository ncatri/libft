OBJS_FOLDER = bin

SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strcmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstdelnode.c \
			free_split.c \
			get_next_line.c \
			get_next_line_utils.c \
			ft_atod.c \
			ft_atol.c \
			ft_isspace.c \
			ft_is_incharset.c \
			ft_pushback_array.c \
			ft_pushfront_array.c

OBJS	= $(addprefix $(OBJS_FOLDER)/, $(SRCS:.c=.o))

RM		= rm -f

CC		= clang 

HEADER_DIR = includes/
HEADERS_LIST = libft.h get_next_line.h

CFLAGS	= -Wall -Wextra -Werror -I $(HEADER_DIR) -g

NAME	= libft.a

HEADER_DIR = includes/

HEADERS_LIST = libft.h get_next_line.h

$(OBJS_FOLDER)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar rcs $(NAME) $? 

$(OBJS):	$(addprefix $(HEADER_DIR), $(HEADERS_LIST))

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			$(RM) -r $(OBJS_FOLDER)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
