#include <unistd.h>

void ft_print_comb(void)
{
    int first_digit;
    int second_digit;
    int third_digit;

    first_digit = '0';
    while (first_digit <= '7')
    {
        second_digit = first_digit + 1; 
        while (second_digit <= '8')
        {
           third_digit = second_digit + 1;
           while (third_digit <= '9')
           {
                write(1, &first_digit, 1);
                write(1, &second_digit, 1); 
                write(1, &third_digit, 1);
                if (!(first_digit == '7' && second_digit == '8' && third_digit == '9'))
                {
                    write(1, ", ", 2);                 
                }
    
                third_digit++;
            }
            second_digit++;
        }   
        first_digit++;   
    }
}
