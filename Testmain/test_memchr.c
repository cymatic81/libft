#include <stdio.h>
#include "ft_memchr.c"

int	main()
{
	const char *string;
	int	n;
	int a;
	int b;
	char *location1;
	char *location2;
	
	n = 13;
	string = "This is a string!";
	a = 's';
	b = 'r';

	location1 = ft_memchr(string, a, n);
	location2 = ft_memchr(string, b, n);

	printf("%s %X\n", location1, &(*location1));
	printf("%s %X", location2, &(*location2));
}
