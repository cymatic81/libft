/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:08:16 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/24 17:03:00 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int x)
{
	char	*strcpy;
	char	xc;
	int		i;
	
	
	strcpy = str;
	xc = x + '0';
	i =	0;

	if (x == '\n')
		return (NULL);
	while (str[i] != xc && str[i] != '\n')
	{
		i++;
	}
	if (str[i] == '\n')
		return (NULL);
	else 
		return (&(str[i]));
}
