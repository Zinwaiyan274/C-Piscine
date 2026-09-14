int ft_strcmp(char *s1, char *s2)
{
    unsigned int index;

    index = 0;
    while (s1[index] != '\0' && s2[index] != '\0')
    {
        if (s1[index] != s2[index])
        {
           return   (s1[index] - s2[index]); 
        }
        index++;
    }
    return (s1[index] - s2[index]);
}