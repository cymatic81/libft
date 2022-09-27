/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:37 by jchapman          #+#    #+#             */
/*   Updated: 2022/08/30 12:24:08 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	int	i;

	i = 0;
	while (i < (n-1) && string1[i] == string2[i])
	i++;
	return (string1[i] - string2[i]);
}
