/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 02:37:32 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 02:40:44 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int	i;
	int	is_lowcs;

	i = 0;
	is_lowcs = 1;
	while (str[i])
	{
		if (!((str[i] <= 'z') && (str[i] >= 'a')))
			is_lowcs = 0;
		i++;
	}
	return (is_lowcs);
}

#include <stdio.h>

int	main(void)
{
	char	src[30] = "asbbfASFASVavsdv";

	printf("%d", ft_str_is_lowercase(src));
	return (0);
}
