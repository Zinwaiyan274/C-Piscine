#include <unistd.h>

void ft_putnbr(int nb)
{
    long num;
    char c;

    num = nb;
    if (num < 0)
    {
        num = num * -1;
        write(1, "-", 1);
    }
    if (num >= 10)
    {
        ft_putnbr(num / 10);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}