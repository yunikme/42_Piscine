#include<stdlib.h>
#include<stdio.h>
int *ft_range(int min, int max)
{
    if (min >= max)
        return NULL;
    int i;
    i = max - min; //number of elements
    int *ints;
    ints = (int *)malloc((i + 1) * sizeof(int));
    if (ints == NULL)
        return 0;
    int j;
    j = 0;
    while (j <= i)
    {   
        ints[j] = min + j;
        j++;
    }
    return ints;
}
// int main()
// {
//     int min = -8;
//     int max = -9;
//     int *ints = ft_range(min, max);
//     int len = max - min;
//     int k = 0;
//     while (k <= len)
//     {
//         printf("%d", ints[k]);
//         k++;
//     }
//     printf("\n");
//     free(ints);
// }