#include <unistd.h>

void ft_print_combn(int n)
{
   int  first_digit;
   int  second_digit;
   char a;
   char b;

   if (n != 2)
   {
    return;
   }

   first_digit = 0;
   while (first_digit <= 8)
   {
    second_digit = first_digit + 1;
    while (second_digit <= 9)
    {
        a = first_digit + '0';
        b = second_digit + '0';
        write(1, &a, 1);
        write(1, &b, 1);
        if (!(first_digit == 8 && second_digit == 9))
        {
            write(1, ", ", 2);
        }
        second_digit++;
    }
    first_digit++;
   }
}