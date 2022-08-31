#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strrchr.c"

int	main()
{
	const char *string;
	int a;
	int b;
	char *location1;
	char *location2;
	
	string = "This is a string!";
	a = 'a';
	b = 'r';

	location1 = ft_strrchr(string, a);
	location2 = ft_strrchr(string, b);

	printf("%s %X\n", location1, &(*location1));
	printf("%s %X", location2, &(*location2));
}
