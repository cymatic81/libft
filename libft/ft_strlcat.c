/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:28:48 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/29 15:22:06 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dest,
const char *restrict source, size_t sizedest)
{
	char	*sourcestr;
	int		destlen;
	int		i;

	destlen = ft_strlen(dest);
	sourcestr = (char *)source;
	i = 0;
	while (sourcestr[i] && (i + destlen < sizedest))
	{
		dest[i + destlen] = sourcestr[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (i + destlen);
}
