/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:01:19 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/13 14:30:04 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
