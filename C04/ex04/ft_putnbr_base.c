#include <unistd.h>

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	base_value(unsigned int nbr, char *base, int len)
{
	char	c;

	if (nbr >= (unsigned int)len)
		base_value(nbr / len, base, len);
	c = base[nbr % len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	number;

	len = base_len(base);
	if (len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		number = -(unsigned int)nbr;
	}
	else
		number = (unsigned int)nbr;
	base_value(number, base, len);
}