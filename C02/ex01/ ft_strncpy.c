/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:59:33 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 05:04:00 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int	i;

	i = 0;
	while (1)
	{
		if ((src[i] != '\0' ) && (i < n))
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (dest);
		}
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char	dest[20];
	char	src[20] = "Hello World!";
	
	ft_strncpy(dest, src, 12);
	printf("dest: '%s' src: '%s' -", dest, src);
	
	return (0);
}
