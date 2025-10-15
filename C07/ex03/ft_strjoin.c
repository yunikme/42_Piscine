#include<stdlib.h>
#include<stdio.h>
int ft_strlen(char *c)
{
    int len;
    len = 0;
    while (c && c[len])
        len++;
    return len;
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int k;
    int total;
    int sep_len;
    char *out;

    if (size <= 0)
    {
        out = (char *)malloc(1);
        if (out)
            out[0] = '\0';    
        return out;
    }
    sep_len = ft_strlen(sep);
    total = 0;
    i = 0;
    while (i < size)
    {
        total += ft_strlen(strs[i]);
        if (i < size - 1)
            total += sep_len;
        i++;
    }
    out = (char *)malloc((total + 1) * sizeof(char));
    if (!out)
        return NULL;
    k = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            out[k++] = strs[i][j++];
        if (i < size - 1)
        {
            j = 0;
            while (sep[j])
                out[k++] = sep[j++];
        }
        i++;
    }
    out[k] = '\0';
    return out; 
}
int main()
{
    char *str[] = {"Hello", "world", "this"};
    int size = 3;
    char *sep = " ";
    //int i  = 0;
    char *output = ft_strjoin(size, str, sep);
    if (output)
    {
        printf ("%s\n", output);
        free(output);
    }
}