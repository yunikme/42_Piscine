#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *str)
{
    int i = ft_strlen(str);
    char *out = (char *)malloc ((i + 1) * sizeof(char));
    if (out == NULL)
        return NULL;
    int index = 0;
    while (i >= index)
    {
        out[index] = str[index];
        index++;
    }
    return out;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    struct  s_stock_str *tab;
    int i = 0;

    tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if (tab == NULL)
        return NULL;
    
    while (i < ac)
    {
        if (av[i] == NULL)
            return NULL;
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = ft_strdup(av[i]);
        tab[i].copy = ft_strdup(av[i]);
        
        if (tab[i].str == NULL || tab[i].copy == NULL)
            return NULL;
        i++;
    }
    tab[i].str = NULL;
    return tab;
}
