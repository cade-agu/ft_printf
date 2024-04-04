
#include "ft_printf.h"

int	ft_print_character(int character)
{
	write(1, &character, 1);
	return (1);
}
