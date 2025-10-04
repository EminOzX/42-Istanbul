/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 22:40:06 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 02:35:29 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i])
	{
		if (!(((str[i] <= 'z') && (str[i] >= 'a')) || ((str[i] <= 'Z')
					&& (str[i] >= 'A'))))
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}

int	main(void)
{
	char	src[30] = "";

	printf("string: '%s', %d", src, ft_str_is_alpha(src));
	return (0);
}
