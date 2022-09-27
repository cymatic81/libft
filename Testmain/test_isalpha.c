#include <stdio.h>
#include "ft_isalpha.c"

int	main()
{
	int a;
	int b;

	a = 'a';

	b = ft_isalpha(a);
	printf("%i", b);
}
