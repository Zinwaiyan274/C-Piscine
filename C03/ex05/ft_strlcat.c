unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int src_len;
    unsigned int dest_len;

    i = 0;
    j = 0;
    src_len = 0;
    dest_len = 0;

    while (src[src_len] != '\0')
    {
        src_len++;
    }

    while (dest[i] != '\0' && i < size)
    {
        i++;
    }
    dest_len = i;

    if (size <= dest_len)
    {
        return (size + src_len);
    }
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;

    }
    dest[i] = '\0';
    return (src_len + dest_len);
}