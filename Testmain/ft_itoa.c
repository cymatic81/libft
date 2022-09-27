/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:28:14 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/09 15:50:52 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*edgecase(void)
{
	char	*tmp;

	tmp = ft_calloc(12, 1);
	if (!tmp)
		return (NULL);
	tmp = "-2147483648";
	return (tmp);
}

static int	strlength(int x)
{
	int		count;

	count = 2;
	while (x > 9)
	{
		x = x / 10;
		count++;
	}
	return (count);
}

static char	*writestring(int x, int i, int posneg, char *returns)
{	
	while (x > 9)
	{
		returns[i] = (x % 10) + 48;
		x = x / 10;
		i--;
	}		
	returns[i] = (x % 10) + 48;
	if (posneg == 1)
	{
		i--;
		returns[i] = '-';
	}
	return (returns);
}

char	*ft_itoa(int x)
{
	char	*returns;
	int		i;
	int		length;
	int		posneg;

	if (x == -2147483648)
	{
		returns = edgecase();
		return (returns);
	}
	posneg = 0;
	if (x < 0)
	{
		x = x * -1;
		posneg = 1;
	}	
	length = strlength(x);
	returns = ft_calloc((length + posneg), sizeof (char));
	if (!returns)
		return (NULL);
	i = posneg + length - 2;
	returns = writestring(x, i, posneg, returns);
	return (returns);
}
