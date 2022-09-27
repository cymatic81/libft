#include <stdio.h>
#include <stdlib.h>
#include "ft_memcpy.c"
#include "ft_bzero.c"
#include "ft_calloc.c"
#include "ft_itoa.c"

int main()
{
	char	*output;
	int		a;
	int		b;
	int		c;
	int		d;

	a = -2147483648; //int min
	b = 2147483647; //int max
	c = -14700600; 
	d = 0;

	output = ft_itoa(a);
	printf(":%s:\n", output);
	output = ft_itoa(b);
	printf(":%s:\n", output);
	output = ft_itoa(c);
	printf(":%s:\n", output);	
	output = ft_itoa(d);
	printf(":%s:\n", output);	
	return(0);		
}
