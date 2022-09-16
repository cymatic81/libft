#include <stdlib.h>
#include <stdio.h>


typedef struct		s_list
{
	void			*content;
	struct	s_list	*next;
}					t_list;

#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"

int main()
{
	t_list	*last;
	t_list	*linkedlist;
	t_list	*new;
	t_list	*pone;
	void	*content1;
	void	*content2;
	void	*content3;
	int		size;

	content1 = "Hello";
	content2 = "Hi!";
	content3 = "How";
	
	linkedlist = ft_lstnew (content1);
	printf ("%s\n", linkedlist->content);
	size = ft_lstsize(linkedlist);
	printf("%d\n", size);
	
	new = ft_lstnew (content2);
	printf ("%s\n", new->content);
	ft_lstadd_front (&linkedlist, new);
	size = ft_lstsize (linkedlist);
	printf("%d\n", size);
	
	pone = ft_lstnew (content3);
	ft_lstadd_front (&linkedlist, pone);
	printf ("%s\n", pone->content);
	size = ft_lstsize (linkedlist);
	printf("%d\n", size);
	
	last = ft_lstlast(linkedlist);
	printf("%s\n", last->content);
	printf("%p\n", last);
	printf("%p\n", linkedlist);
	printf("%p\n", pone);
	return(0);
}
