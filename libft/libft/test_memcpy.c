#include <stdio.h>
#include "ft_memcpy.c"

int main()
{
	int 	n;
	char	source[32] = "hello!";
	char	dest[32] = "String over here";

	n = 6;
	ft_memcpy(dest, source, n);
	printf("%s", dest); 
}
