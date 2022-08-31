#include <stdio.h>
#include "ft_bzero.c"

int	main()
{	
	int		n;
	char	a[32] = "there is a string here";

	n = 8;

	printf("%s\n", a);
	ft_bzero(a, n);
	printf("%s", a);
}
