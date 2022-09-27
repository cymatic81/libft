#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"
#include "ft_calloc.c"

int main()
{
	int		l;
	void	*test;
	char	*source;

	source = "hello";
	l = 1;
	printf("%s\n", test);
	test = ft_calloc(sizeof (char), l);
	printf("%s\n", test);
	test = source;
	printf("%s\n", test);
	return(0);
}
