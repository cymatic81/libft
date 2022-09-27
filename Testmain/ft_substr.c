/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:55:42 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/02 12:08:37 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;
	unsigned int	maxlength;

	if (s == NULL)
		return (NULL);
/* is this check needed? */
	maxlength = 0;
	while (s[maxlength])
		maxlength++;
	if (start >= maxlength || len == 0)
		return (0);
/* is this check needed? */
	out = malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	i = 0;
	while ((s[start + i]) != '\0' && i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
