#include <stdlib.h>
#include <stdio.h>


typedef struct		s_list
{
	void			*content;
	struct	s_list	*next;
}					t_list;

#include "ft_lstnew.c"

int main()
{
	t_list	linkedlist;
	void	*content1;
	void	*content2;
	void	*content3;
	
	content1 = "Hello";
	content2 = "Hi!";
	content3 = "How";
	
	linkedlist = *ft_lstnew(content1);
	printf("%s\n", linkedlist.content);
	linkedlist.content = content2;
	printf("%s\n", linkedlist.content);
	return(0);
}
