#include <unistd.h>

int main(int ac, char **av)
{
    (void)(ac);
    int j;
    j = 0;
    while (av[0][j] != '\0')
    {
            write(1, &av[0][j], 1);
            j++;
    }
    write(1, "\n", 1); 
}