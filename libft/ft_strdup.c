/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:13:25 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/02 11:21:16 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strdup (const char *str)
{
	char	*tempptr;
	int		i;

	tempptr = malloc (sizeof(char) * (ft_strlen(str) + 1));
	if (tempptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		tempptr[i] = str[i];
		i++;
	}
	i++;
	tempptr[i] = '\0';
	return (tempptr);
}
