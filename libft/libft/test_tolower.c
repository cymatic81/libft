#include <stdio.h>
#include "ft_tolower.c"

int main()
{
	int a;
	int b;

	a = '+';

	printf("%c\n", a);
	b = ft_tolower(a);
	printf("%c", b);
}
