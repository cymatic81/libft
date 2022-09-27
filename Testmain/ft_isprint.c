/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:08 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/23 11:15:31 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int x)
{
	if (x >= 33 && x <= 126)
		return (x);
	else
		return (0);
}