#include <unistd.h>

int ft_strcmp(char *a, char *b)
{
    int i;

    i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if ( a[i] != b[i])
        {
            return (a[i] - b[i]);
        }
        i++;
    }
    return (a[i] - b[i]);
}

int main(int ac, char **av)
{

    int i;
    int j;
    char *t;

    i = 1;
    j = 0;

    while ( i < ac )
    {
        j = i + 1;
        while (j < ac)
        {   
            if (ft_strcmp(av[i], av[j]) > 0)
            {
                t = av[i];
                av[i] = av[j];
                av[j] = t; 
            }
            j++;
        }
        i++;
    }

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            write(1, &av[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}