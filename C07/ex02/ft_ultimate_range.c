#include<stdlib.h>
#include<stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }
    int i;
    i = 0;
    i = max - min;
    *range = (int *)malloc((i + 1) * sizeof(int));
    if (*range == NULL)
    {
        return (-1);
    }
    int j;
    j = 0;
    while(j < i)
    {
        (*range)[j] = min + j;
        j++;
    }
    return i;
}
int main()
{
    int *test;
    int min = 5;
    int max = 8;
    int size = ft_ultimate_range(&test, min, max);
    int i = 0;
    while (i < size)
    {
        printf("%d", test[i]);
        i++;
    }
    printf("\n");
    free(test);
}