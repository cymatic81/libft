#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"
#include "ft_calloc.c"
#include "ft_split.c"

int	main()
{
	char	*str1 = "Split this string into words";
	char	*str2 = "Split-this-string-at-the-hyphons";
	char	a = ' ';
	char	b = '-';
	char	**retarray;
	int		string;


	retarray = ft_split(str1, a);
	printf("original string: %s\n", str1);
	string = 0;
	while (retarray[string])
	{
		printf(":%s:\n", retarray[string]);
		string++;
	}
	retarray = ft_split(str2, b);
	printf("original string: %s\n", str2);
	string = 0;
	while (retarray[string])
	{
		printf(":%s:\n", retarray[string]);	
		string++;
	}
	return(0);
}

