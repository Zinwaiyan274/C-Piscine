char *ft_strcpy(char *dest, char *src)
{
    int index;

    index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

// #include <stdio.h>
// int main(void)
// {
//     char    dest[6];
//     char    *src = "World";

//     ft_strcpy(dest, src);
//     printf("%s\n", dest);
// }