/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:53:47 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/05 16:15:45 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	trim(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{	
		if (a == set[i])
			return (1);
	i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*returns;
	char	*tempstr;
	int		end;
	int		start;

	tempstr = ft_strdup(s1);
	end = (ft_strlen(s1) - 1);
	while (trim(tempstr[end], set))
		tempstr[end--] = '\0';
	start = 0;
	while (trim(tempstr[start], set))
		start++;
	returns = malloc(sizeof (char) * (end - start + 3));
	if (returns == (NULL))
		return (NULL);
	end = 0;
	while (tempstr[start])
		returns[end++] = tempstr[start++];
	free(tempstr);
	returns[end] = '\0';
	return (returns);
}
