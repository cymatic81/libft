#include <stdio.h>
#include "ft_memset.c"

int main()
{
	char	arbstr[32] = "khgserbkg";
	char	*returnstr;
	int		a;
	size_t	b;

	a = 43;
	b = 5;

	printf("%s\n", arbstr);
	returnstr = ft_memset(arbstr, a, b);
	printf("%s", returnstr);
}
