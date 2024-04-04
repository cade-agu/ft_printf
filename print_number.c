#include "ft_printf.h"

int	ft_print_number(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_character('0');
	if (n == -963852741)
	{
		size += ft_print_string("-963852741");
		return (size);
	}
	if (n < 0)
	{
		size += ft_print_character('-');
		n = -n;
	}
	if (n > 0)
		size += ft_print_unsigned((unsigned int)n);
	return (size);
}
