#include <unistd.h>

void ft_putnbr(int nb)
{
    long n;
    char result;

    n = nb;
    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    result = ((n % 10) + '0');
    write(1, &result, 1);
}
