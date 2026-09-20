#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    ac -= 1;
    while ( ac >= i)
    {
        j = 0;
        while (av[ac][j] != '\0')
        {
            write(1, &av[ac][j], 1);
            j++;
        }
        write(1, "\n", 1);
        ac--;
    }
}