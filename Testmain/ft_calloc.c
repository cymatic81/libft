/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:13:25 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/01 12:29:40 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc (size_t count, size_t size)
{
	void	*tempptr;
	
	tempptr = malloc (count * size);
	if (tempptr == NULL)
		return (NULL);
	ft_bzero(tempptr, count * size);
	return (tempptr);
}
