/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 02:43:55 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 02:49:40 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i])
	{
		if (!((str[i] <= '~') && (str[i] >= '!')))
			is_printable = 0;
		i++;
	}
	return (is_printable);
}

#include <stdio.h>

int	main(void)
{
	char	src[30] = "\\\\\\";

	printf("%d", ft_str_is_printable(src));
	return (0);
}