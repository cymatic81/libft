/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:51:10 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/30 14:02:42 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	char	*strcopy1;
	char	*strcopy2;
	int		i;

	strcopy1 = (char *)string1;
	strcopy2 = (char *)string2;
	i = 0;
	while (i < (n-1) && strcopy1[i] == strcopy2[i])
	i++;
	return (strcopy1[i] - strcopy2[i]);
}
