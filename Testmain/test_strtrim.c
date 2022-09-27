#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strtrim.c"

int main()
{
	char		*str2;
	char const	*str1;
	char const	*set;

	str1 = "+--!!test+string!+!-";
	set = "+-!";
	printf("%s\n", str1);
	str2 = ft_strtrim(str1, set);
	printf("%s\n", str2);
	return(0);
}
