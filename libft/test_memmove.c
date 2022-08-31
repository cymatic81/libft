#include <stdio.h>
#include "ft_memmove.c"

int main()
{
	int 	n;
	char	source[32] = "hello!";
	char	dest[32] = "String over here";

	n = 8;
	ft_memmove(dest, source, n);
	printf("%s", dest); 
}
