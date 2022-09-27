#include <stdlib.h>
#include <stdio.h>


typedef struct		s_list
{
	void			*content;
	struct	s_list	*next;
}					t_list;

#include "ft_bzero.c"

void	del(void *x)
{
	ft_bzero(x, 1);
}

#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstadd_back.c"
#include "ft_lstiter.c"
#include "ft_strlen.c"
#include "ft_strdup.c"

int main()
{
	t_list	*last;
	t_list	*linkedlist;
	t_list	*new;
	t_list	*pone;
	void	*cpy1;
	void	*cpy2;
	void	*cpy3;
	void	*content1;
	void	*content2;
	void	*content3;
	int		size;

	content1 = "Hello";
	content2 = "Hi!";
	content3 = "How";
	
	cpy1 = ft_strdup(content1);
	cpy2 = ft_strdup(content2);
	cpy3 = ft_strdup(content3);

	linkedlist = ft_lstnew (cpy1);
	printf ("%s\n", linkedlist->content);
	size = ft_lstsize(linkedlist);
	printf("%d\n", size);
	
	new = ft_lstnew (cpy2);
	printf ("%s\n", new->content);
	ft_lstadd_front (&linkedlist, new);
	size = ft_lstsize (linkedlist);
	printf("%d\n", size);
	
	pone = ft_lstnew (cpy3);
	ft_lstadd_back (&linkedlist, pone);
	printf ("%s\n", pone->content);
	size = ft_lstsize (linkedlist);
	printf("%d\n", size);
	
	last = ft_lstlast(linkedlist);
	printf("%s\n", last->content);
	
	ft_lstiter(linkedlist, &del);
	last = ft_lstlast(linkedlist);
	printf("%s\n", last->content);

	return(0);
}
