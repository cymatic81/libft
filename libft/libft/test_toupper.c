#include <stdio.h>
#include "ft_toupper.c"

int main()
{
	int a;
	int b;

	a = 107;

	printf("%c\n", a);
	b = ft_toupper(a);
	printf("%c", b);
}
