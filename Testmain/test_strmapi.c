#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strmapi.c"

char caps(unsigned int x, char s)
{
	x++;
	if (s > 96 && s < 123)
	   return (s - 32);	
	return (s);
}

char lower(unsigned int x, char s)
{
	x++;
	if ( s > 64 && s < 91)
		return (s + 32);
	return (s);
}

int	main()
{
	char const	*s = "ThIs Is A teST strING!";
	char		*test1;
	char		*test2;
	char		(*fptr1)(unsigned int, char);
	char		(*fptr2)(unsigned int, char);

	fptr1 = caps;
	fptr2 = lower;
	printf(":%s:\n", s);
	test1 = ft_strmapi(s, fptr1);
	printf(":%s:\n", test1);
	test2 = ft_strmapi(s, fptr2);
	printf(":%s:\n", test2);
	return(0);
}

