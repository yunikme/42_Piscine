#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

# define SUCCESS 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of argument.\n"
# define ODD_MSG "I have an odd number of argument. \n"

# define EVEN(nbr) (nbr % 2 == 0)

typedef int t_bool;

void    ft_putstr(char *str);
t_bool  ft_is_even(int nbr);
int     main(int argc, char **argv);

#endif