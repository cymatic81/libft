/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:08:16 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/30 10:47:17 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int x)
{
	char	*strcpy;
	char	xc;
	int		i;

	strcpy = (char *)str;
	xc = (char) x;
	i = 0;
	if (x == '\n')
		return (NULL);
	while (strcpy[i] != xc && strcpy[i] != '\n')
		i++;
	if (strcpy[i] == '\n')
		return (NULL);
	else
		return ((char *)str + i);
}
