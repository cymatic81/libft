/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:06:19 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/30 13:28:24 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*strcopy;
	int		i;

	strcopy = (char *)str;
	i = 0;
	if (c == '\n')
		return (NULL);
	while (strcopy[i] != c && strcopy[i] != '\n' && i < n)
		i++;
	if (strcopy[i] == '\n' || i == n)
		return (NULL);
	else
		return ((char *)str + i);
}
