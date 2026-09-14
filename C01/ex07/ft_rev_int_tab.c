void ft_rev_int_tab(int *tab, int size)
{
    int index;
    int b;
    int temp;

    index = size - 1;
    b = 0;
    while   (index != ((size - 1)/2))
    {
        temp = tab[b];
        tab[b] = tab[index];
        tab[index] = temp;
        index--;
        b++;
    }
}

/* 
#include <stdio.h>

int main(void)
{
    int array[] = {1,2,3,4};
    int index = 0;

    ft_rev_int_tab(array, 4);

    while (index < 4)
    {
        printf("%d\n", array[index++]);
    }
}
*/
