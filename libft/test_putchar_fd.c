#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_putnbr_fd.c"

int main()
{
	int		fd = 1;
	int		a = -2147483648;
	int		b = 53426745;
	int 	c = -45;
	
	//int		fd;
	//char	c = 'F';
	
	ft_putnbr_fd(a, fd);
	ft_putnbr_fd(b, fd);
	ft_putnbr_fd(c, fd);
	//fd = open("fdtester", O_CREAT, 0);
	//printf("file descriptor: %d\n", fd);
	//ft_putchar_fd(c, fd);
	//close(fd);
	return(0);
}
