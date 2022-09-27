/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:34:32 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/29 10:35:27 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, size_t len)
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
