#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int	ft_printf(const char *format, ...);
int	ft_print_character(int character);
int	ft_print_string(char *str);
int	ft_print_number(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_pointer(unsigned long long ptr);
int	ft_print_hexadecimal(unsigned int num, const char word);

#endif
