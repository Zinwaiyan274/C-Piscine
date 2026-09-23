#include <unistd.h>

void	print_hex(unsigned long n, int digits)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	if (digits > 1)
		print_hex(n / 16, digits - 1);
	c = hex[n % 16];
	write(1, &c, 1);
}

void	print_address(void *addr)
{
	print_hex((unsigned long)addr, 16);
	write(1, ":", 1);
	write(1, " ", 1);
}

void	print_hex_byte(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_hex_area(unsigned char *p, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (j < size)
			print_hex_byte(p[j]);
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	print_ascii_area(unsigned char *p, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < size)
	{
		if (p[j] >= 32 && p[j] <= 126)
			write(1, &p[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p;
	unsigned int	i;
	unsigned int	line_size;

	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		line_size = size - i;
		if (line_size > 16)
			line_size = 16;
		print_address(p + i);
		print_hex_area(p + i, line_size);
		print_ascii_area(p + i, line_size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}


// int	main(void)
// {
// 	char	str[] = "Bonjour les aminches\t\n\tc'est fou tout ce qu on peut faire avec.";

// 	ft_print_memory(str, sizeof(str) - 1);
// 	return (0);
// }
