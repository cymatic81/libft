#include <string.h>
#include <stdio.h>
#include "ft_strlcpy.c"
#include "ft_strnstr.c"

int	main()
{
	char	string1[64] = "Can you find the needle in the haystack?";
	char	string2[32] = "the";
	int		n; 
	char	*returns;
	

	n = 15;
	returns = ft_strnstr (string1, string2, n);
	printf("%s\n", returns);
	return(0);
}
