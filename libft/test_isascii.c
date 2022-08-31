#include <stdio.h>
#include "ft_isascii.c"

int main()
{
	int 	a;
	int		b;

	a = 255;

	b = ft_isascii(a);
	printf("%i", b);
}
