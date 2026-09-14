char *ft_strcpy(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[i])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
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