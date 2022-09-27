#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"
#include "ft_strlen.c""

int	main()
{
	char			*s1;
	char			*s2;
	char			*output;

	s1 = "Hi ";
	s2 = "there";
	output = ft_strjoin(s1, s2);
	printf("%s\n", output);
	return (0);
}

