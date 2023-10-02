NAME = libft.a

RM = rm -f

cc = gcc

CFLAGS = -Wall -Wextra -Werror

SRCs = ft_isalnum.c	\
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_bzero.c  \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c	\
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   

OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)


$.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	$(RM) $(OBJs)


fclean : clean 
	$(RM) $(NAME)


re : fclean all
