#include <stdio.h>
#include "ft_isalnum.c"

int main()
{
	char 	a;
	int		b;

	a = '+';

	b = ft_isalnum(a);
	printf("%i", b);
}
