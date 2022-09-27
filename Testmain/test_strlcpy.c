#include <stdio.h>
#include "ft_strlcpy.c"

int main()
{
	int		returnvalue;
	int 	n;
	char	source[32] = "hello!";
	char	dest[32] = "String over here";

	n = 8;
	returnvalue = ft_strlcpy(dest, source, n);
	printf("%s\n", dest); 
	printf("%d", returnvalue);
}
