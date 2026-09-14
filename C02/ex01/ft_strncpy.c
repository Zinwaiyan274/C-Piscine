char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned index;
   
    index = 0;
    while (index < n && src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
   
    while (index < n)
    {
        dest[index] = '\0';
        index++;
    }
    return dest;
}

// #include <stdio.h>
// int main(void)
// {
//     char    dest[6];
//     char    *src = "World";

//     ft_strncpy(dest, src, 4);
//     printf("%s\n", dest);
// }