#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    ft_putnbr(int nbr)
{
    int sign = - 1;
    long n;
    
    n = nbr;
    if (n < 0)
    {
        ft_putchar('-');
        n *= sign;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else if (n > 0 && n <= 9)
    {
        ft_putchar(n + 48);
    }
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i = 1;
    while (par[i].str != 0)
    {   
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}

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

    tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
    if (tab == NULL)
        return NULL;
    while (i < ac)
    {
        if (av[i] == NULL)
        {    
            return NULL;
        }
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = ft_strdup(av[i]);
        tab[i].copy = ft_strdup(av[i]);
        
        if (tab[i].str == NULL || tab[i].copy == NULL)
        {   
            free(tab);
            return NULL;
        }
        i++;
    }
    tab[i].str = NULL;
    return tab;
}
int main(int argc, char **argv)
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
}