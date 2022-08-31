#include "ft_atoi.c"
#include <stdio.h>

int	main()
{
	int b;
	char a[] = "\t\n\v\f\r -++-+---+2147483647";
	b = ft_atoi(a);
	printf("%d", b);
	return (0);
}	
