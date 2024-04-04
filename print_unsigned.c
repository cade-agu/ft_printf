
#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_character('0');
	else
	{
		if (n / 10 != 0)
			ft_print_unsigned (n / 10);
		ft_print_character ((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
