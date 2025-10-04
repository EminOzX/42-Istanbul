/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 02:41:05 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 02:43:10 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int	i;
	int	is_upcs;

	i = 0;
	is_upcs = 1;
	while (str[i])
	{
		if (!((str[i] <= 'Z') && (str[i] >= 'A')))
			is_upcs = 0;
		i++;
	}
	return (is_upcs);
}

#include <stdio.h>

int	main(void)
{
	char	src[30] = "";

	printf("%d", ft_str_is_uppercase(src));
	return (0);
}