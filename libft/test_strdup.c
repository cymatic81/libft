#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strdup.c"

int main()
{
	void	*test;
	char	*source;

	source = "hello";
	printf("%s\n", test);
	test = ft_strdup(source);
	printf("%s\n", test);
	return(0);
}
