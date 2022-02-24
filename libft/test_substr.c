/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:03:56 by jchapman          #+#    #+#             */
/*   Updated: 2022/01/21 13:49:52 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_substr.c"

int	main(){
	char			input[] = "this is a test for my substr"; //28 char long (a-1)
	char			*output;
	unsigned int	a;
	size_t			b;

	a = 10;
	b = 4;

	output = ft_substr(input, a, b);
	printf("%s\n", output);
	return (0);
}

