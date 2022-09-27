/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:52:38 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/30 11:11:17 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int x)
{
	char	*strcpy;
	char	xc;
	int		i;

	strcpy = (char *)str;
	xc = (char) x;
	i = ft_strlen(strcpy);
	while (strcpy[i] != xc && i != 0)
		i--;
	if (i == 0)
		return (NULL);
	else
		return ((char *)str + i);
}
