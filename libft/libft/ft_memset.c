/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:49:21 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/26 10:36:00 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int x, size_t length)
{
	unsigned char	b;
	int				i;

	i = 0;
	b = (unsigned char) str;

	while (i < length)
	{
		b[i] = x;
		i++;
	}
	return (str = b);
}

