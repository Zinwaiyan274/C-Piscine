void ft_sort_int_tab(int *tab, int size)
{
    int left_digit;
    int right_digit;
    int swapped;
    int temp;

    swapped = 1;
    while (swapped == 1)
    {   
        left_digit = 0;
        right_digit = 1;
        swapped = 0;
        while (right_digit < size )
        {
            if (tab[left_digit] > tab[right_digit])
            {
                temp = tab[left_digit];
                tab[left_digit] = tab[right_digit];
                tab[right_digit] = temp;

                swapped = 1;
            }
            left_digit++;
            right_digit++;

        } 
    }
}
#include <stdio.h>

int main(void)
{
    int array[] = {1,2,3,4};
    int index = 0;

    ft_sort_int_tab(array, 4);

    while (index < 4)
    {
        printf("%d\n", array[index++]);
    }
}
