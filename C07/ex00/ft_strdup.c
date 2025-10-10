#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char    *ft_strdup(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    char *target = (char *)malloc((i + 1) * sizeof(char));
    if (target == NULL)
        return 0;
    int index;
    index = 0;
    while (i >= index)
    {
        target[index] = src[index];
        index++;
    }
    return target;
}
// int main()
// {
//     char* src = "saya bisa makan";
//     char* target = ft_strdup(src);
//     char* target1 = strdup(src);
//     printf("%s\n", target);
//     printf("%s\n", target1);
// }