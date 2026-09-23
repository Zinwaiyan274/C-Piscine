#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i;
    char *hex;
    char c;

    hex = "0123456789abcdef";
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            write(1, &str[i], 1);
        }
        else
        {
            write(1, "\\", 1);
            c = hex[(unsigned char)str[i] / 16];
            write(1, &c, 1);
            c =  hex[(unsigned char)str[i] % 16];
            write(1, &c, 1);
        }
        i++;
    }
}

// int main(void)
// {
//     char str[] = "Hello\tWorld\nTest\aEnd"; 
//     ft_putstr_non_printable(str); 
//     write(1, "\n", 1); 
//     return (0);
// }