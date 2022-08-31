/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:44:27 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/29 10:16:42 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, size_t len)
{
	char	*sourcestr;
	char	*destinstr;
	char	*returnstr;
	int		i;

	sourcestr = (char *) source;
	returnstr = (char *) dest;
	destinstr = (char *) dest;
	i = 0;
	while (sourcestr[i] && i < len)
	{	
		destinstr[i] = sourcestr[i];
		i++;
	}
	dest = sourcestr;
	return (returnstr);
}
