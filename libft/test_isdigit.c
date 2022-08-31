#include <stdio.h>
#include "ft_isdigit.c"

int main()
{
	int 	a;
	int		b;

	a = 64;

	b = ft_isdigit(a);
	printf("%i", b);
}
