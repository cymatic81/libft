/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:04:55 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/29 12:45:14 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *restrict dest, const char *restrict source, size_t n)
{
	int		i;
	int		ret;

	i = 0;
	while (i < n && source[i] != '\0')
	{
		dest[i] = source[i];
		i ++;
	}
	ret = i;
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (ret);
}
