#include <stdio.h>
#include "ft_strlen.c"


int	main()
{
	int length;
	char *word;

	word = "1234567";

	length = ft_strlen(word);
	printf("%d", length);
}
