#include <stdio.h>
#include "ft_isalpha.c"

int	main()
{
	char a;
	int b;

	a = '3';

	b = ft_isalpha(a);
	printf("%i", b);
}
