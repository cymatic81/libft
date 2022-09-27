/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:53:45 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/13 10:07:25 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int x)
{
	if (x > 64 && x < 91)
		x = x + 32;
	return (x);
}
