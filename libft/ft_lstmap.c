/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:21:14 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/15 14:56:04 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	clearlist(t_list *new, void (*del)(void *))
{
	t_list	*next;
	
	while (new)
	{
		next = new->next;
		del(new);
		free(new);
		new = next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	new = ft_lstnew(f(lst->content));
	if (new == NULL)
		return(NULL);
	while (lst->next)
	{
		node = ft_lstnew(f(lst->next)->content);
		if (node == NULL)
		{
			clearlist(new, del);
			return(NULL);
		}
		lst = lst->next;
		node = node->next;
	}
	return (new);
}
