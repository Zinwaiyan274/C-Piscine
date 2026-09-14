#include <unistd.h>

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;
	int	third_digit;
	int	fourth_digit;

	first_digit = '0';
	second_digit = '0';
	third_digit = '0';
	fourth_digit = '1';
	while (first_digit <= '9')
	{
		while (third_digit <= '9')
		{
			while (fourth_digit <= '9')
			{
				write(1, &first_digit, 1);
				write(1, &second_digit, 1);
				write(1, " ", 1);
				write(1, &third_digit, 1);
				write(1, &fourth_digit, 1);
				if (!(first_digit == '9' && second_digit == '8'
						&& third_digit == '9' && fourth_digit == '9'))
					write(1, ", ", 2);
				fourth_digit++;
			}
			fourth_digit = '0';
			third_digit++;
		}
		third_digit = first_digit;
		second_digit++;
		if (second_digit > '9')
		{
			first_digit++;
			second_digit = '0';
			third_digit = first_digit;
		}
		fourth_digit = second_digit + 1;
	}
}