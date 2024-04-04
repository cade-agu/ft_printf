int	main(void)
{
	char letter = 'J';
	char str[] = "A ver si me entero de esto";
	int n = 10;
	unsigned int n1 = 3;
	int n2= 33;
	int *ptr = &n2; /*puntero que apunta a la dirección de memoria de n2*/
	int n3 = 93;
	
	
	ft_printf("Quiero imprimir una letra %c\n", letter);
	ft_printf("%s!\n", str);
	ft_printf("El valor de nuestro numero es: %d\n", n);
	ft_printf("El numero decimal sin signo es: %u\n", n1);
	ft_printf("la dirección de memoria es: %p\n2", (void *)ptr);
	ft_printf("El número %u en formato hexadecimal en minúsculas es: %x\n", (unsigned int)n3, n3);
	ft_printf("El número %u en formato hexadecimal en mayúsculas es: %X\n", (unsigned int)n3, n3);
	ft_printf("El simbolo de porcentaje es: %%\n");
	return (0);
}
