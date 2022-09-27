#include <stdlib.h>
#include <stdio.h>


typedef struct		s_list
{
	void			*content;
	struct	s_list	*next;
}					t_list;

#include "ft_lstnew.c"
#include "ft_lstadd_front.c"

int main()
{
	t_list	*linkedlist;
	t_list	*new;
	t_list	*pone;
	void	*content1;
	void	*content2;
	void	*content3;
	
	content1 = "Hello";
	content2 = "Hi!";
	content3 = "How";
	
	linkedlist = ft_lstnew (content1);
	printf ("%s\n", linkedlist->content);
	new = ft_lstnew (content2);
	printf ("%s\n", new->content);
	printf("%p\n", new->next);
	ft_lstadd_front (&linkedlist, new);
	printf("%p\n", new->next);
	printf("%p\n", linkedlist);
	return(0);
}
