#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_striteri.c"

void caps(unsigned int x, char *s)
{
	x++;
	if (*s > 96 && *s < 123)
	   s = s - 32;    //this line is BBBAAAAAADDDDDDDDDDDDDD!!!	
	printf("%c", *s);
}

void lower(unsigned int x, char *s)
{
	x++;
	if (*s > 64 && *s < 91)
		s = s + 32;		//this line is bad
	printf("%c", *s);
}

int	main()
{
	char		*s = "ThIs Is A teST strING!";
	void		(*fptr1)(unsigned int, char*);
	void		(*fptr2)(unsigned int, char*);

	fptr1 = caps;
	fptr2 = lower;
	printf(":%s:\n", s);
	ft_striteri(s, fptr1);
	printf("\n");
	ft_striteri(s, fptr2);
	printf("\n");
	return(0);
}

