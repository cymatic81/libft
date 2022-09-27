#include <stdio.h>
#include "ft_strncmp.c"

int	main()
{	
	int		retur;
	size_t	length;
	char	string1[64] = "this is a string";
	char	string2[64] = "this is a different string";

	length = 14;
	retur = ft_strncmp(string1, string2, length);
	printf("%d\n", retur);
}
