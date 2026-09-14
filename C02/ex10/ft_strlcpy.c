unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned index;
    unsigned src_len;

    index = 0;
    src_len = 0;
    while (src[src_len] != '\0')
    {
        src_len++;
    }
    if (size > 0)
    {
        while (index < (size - 1) && src[index] != '\0')
        {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }   
    return  src_len;
}