#include <stdio.h>
#include "ft_strchr.c"

int	main()
{
	const char *string;
	int a;
	int b;
	char *location1;
	char *location2;
	
	string = "This is a string!";
	a = 't';
	b = 'r';

	location1 = ft_strchr(string, a);
	location2 = ft_strchr(string, b);

	printf("%c %x\n", location1, &location1);
	printf("%c %x", location2, &location2);
}
