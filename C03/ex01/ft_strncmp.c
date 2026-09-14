int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int index;

    if (n == 0)
    {
        return (0);
    }
    index = 0;
    while (index < n && s1[index] != '\0' && s2[index] != '\0')
    {
        if (s1[index] != s2[index])
        {
            return (s1[index] - s2[index]);
        }
        index++;
    }
    if (index == n)
    {
        return (0);
    }
    return (s1[index] - s2[index]);
}