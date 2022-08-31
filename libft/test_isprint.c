#include <stdio.h>
#include "ft_isprint.c"

int main()
{
	int 	a;
	int		b;

	a = 127;

	b = ft_isprint(a);
	printf("%i", b);
}
