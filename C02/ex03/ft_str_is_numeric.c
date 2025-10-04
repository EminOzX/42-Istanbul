/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 02:29:01 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 02:33:04 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i])
	{
		if (!((str[i] <= '9') && (str[i] >= '0')))
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}

#include <stdio.h>

int	main(void)
{
	char	src[30] = "";

	printf("%d", ft_str_is_numeric(src));
	return (0);
}
