/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:00:54 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/31 14:18:07 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		strmatch;
	int		i;
	char	*hayscopy;
	
	if (needle[0] == '\n')
		return((char *)haystack);
	i = 0;
	ft_strlcpy (hayscopy, haystack, n);
	while (strmatch != 0 && i < n)
	{
		strmatch = ft_strncmp (&hayscopy[i], needle, n);
		i++;
	}
	if (strmatch == 0)
		return((char *)haystack + i - 1);
	else
		return(NULL);
}
