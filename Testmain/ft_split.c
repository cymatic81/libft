/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:35:07 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/08 12:20:15 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	malloc_failed(char **ptrarray)
{
	int	i;

	i = 0;
	while (ptrarray[i])
	{
		free (ptrarray[i]);
		i++;
	}
	free (ptrarray);
}

char	**malloc_ptrs(const char *s, char c)
{
	char	**ptrarray;
	int		count;
	int		n;

	count = 1;
	n = 0;
	while (s[n])
	{
		if (s[n] == c)
			count++;
	n++;
	}
	ptrarray = (char **)malloc ((count + 1) * (sizeof ((char *)ptrarray)));
	if (!ptrarray)
		return (NULL);
	ptrarray[count + 1] = NULL;
	return (ptrarray);
}

char	*copystring(const char *oss, char c)
{
	char	*tmp;
	int		i;

	i = 0;
	while ((oss[i] != '\0') && (oss[i] != c))
		i++;
	tmp = ft_calloc(i + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[i] = '\0';
	while (i-- > 0)
		tmp[i] = oss[i];
	return (tmp);
}

char	**ft_split(const char *s, char c)
{
	char	**ptrarray;
	int		n;
	int		string;

	ptrarray = malloc_ptrs(s, c);
	if (ptrarray == (NULL))
		return (NULL);
	n = 0;
	string = 0;
	while (s[n])
	{
		while (s[n] == c)
			n++;
		ptrarray[string] = copystring((char *)&s[n], c);
		if (!ptrarray[string])
		{
			malloc_failed(ptrarray);
			return (NULL);
		}	
		string++;
		while ((s[n] != '\0') && (s[n] != c))
			n++;
	}
	return (ptrarray);
}
