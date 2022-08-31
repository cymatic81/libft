#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strlcat.c"

int main()
{
	int		returnvalue;
	int 	n;
	char	source[32] = "hello!";
	char	dest[32] = "String over here";

	n = 18;
	returnvalue = ft_strlcat(dest, source, n);
	printf("%s\n", dest); 
	printf("%d", returnvalue);
}
