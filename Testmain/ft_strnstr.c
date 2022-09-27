/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:00:54 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/01 11:21:33 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	char	hayscopy[n];
	
	if (needle[0] == '\0')
		return((char *)haystack);
	i = 0;
	j = 0;
	ft_strlcpy (hayscopy, haystack, n);
	while (j + i < n)
	{
		j = 0;
		while (hayscopy[j + i] && needle[j] && hayscopy[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return(NULL);
}
