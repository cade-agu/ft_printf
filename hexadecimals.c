
#include "ft_printf.h"

static int		ft_length_hexadecimal(unsigned int num);

static void		ft_search_hexadecimal(unsigned int num, const char word);

int	ft_print_hexadecimal(unsigned int num, const char word)
{
	if (num == 0)
		return (ft_print_character('0'));
	else
		ft_search_hexadecimal(num, word);
	return (ft_length_hexadecimal(num));
}

static void	ft_search_hexadecimal(unsigned int num, const char word)
{
	if (num >= 16) /* logica para convertir un numero entero en su hexadecimal*/
	{
		ft_search_hexadecimal(num / 16, word); /* procesar los dígitos más significavidos del número y al dividirlo x 16 implica tomar el cociente de la división entera, lo que elimina el dígito menos significativo*/
		ft_search_hexadecimal(num % 16, word);/* % calcula el residudo de la división entrea de num /16m que es el dígito  menos significtivo en su prespresentación hexadecimal	*/
	}
	else /* indica que el número es menor que 16*/
	{
		if (num < 10) /* numero menor que 10, el digito hexadecimal es menor que 10m en este caso se imprime el dígito en su representación ASCII utilizado*/
			ft_print_character (num + '0');/*imprimir caracter ascii , si el num da 7, 7+0 es siete así que se imprimirá el carácter ASCII para el dígito 74*/
		else /*si el número no es menor que 10, significa que es mayor o igual a 10, en este caso el dígito hexadecimal debe ser representado por una letra (A-F ó a-f dependiendo de si word es X o x)*/
		{
			if (word == 'x') /*el dígito hexadecimal se convierte en minúscula (a-f), si num =10 'a'representará al dígito hexadecimal 10*/
				ft_print_character(num -10 + 'a');
			if (word == 'X')
				ft_print_character(num -10 + 'A');/*el dígito hexadecimal se convierte en mayúscula (A-F) sí numero es 10, entonces A representa el dígito hexadecimal 10*/
		}
	}
}

static int	ft_length_hexadecimal(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)/*si el número es 0. la longitud de su prepresentacion hexadecimal es 1*/
		return 1;
	while (num != 0)
	{
		num = num / 16;/* dividir por 16 para obtener el proximo digito hexadecimal*/
		len++;
	}
	return (len);
}
