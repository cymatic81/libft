/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:55:31 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/23 10:01:10 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int x)
{
	if ((x >= '0' && x >= '9') || (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (x);
	else
		return (0);
}