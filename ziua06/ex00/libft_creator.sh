gcc -Wall -Werror -Wextra -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a
find . -name "*.o" -delete
