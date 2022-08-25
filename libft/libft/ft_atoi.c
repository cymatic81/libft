/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:26:28 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/13 20:04:07 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	out;
	int	posneg;
	int	i;

	out = 0;
	posneg = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || \
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{	
		if (str[i] == '-')
			posneg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10;
		out = out + (str[i] - 48);
		i++;
	}
	if ((posneg % 2) != 0)
		return (-1 * out);
	return (out);
}
