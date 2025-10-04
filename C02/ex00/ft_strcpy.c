/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:31:44 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/03 22:00:30 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (dest);
		}
		i++;
	}
}

int	main(void)
{
	char	dest[5] = "alper";
	char	src[5] = "mert";
	
	ft_strcpy(dest, src);
	printf("- '%s' - '%s' -", dest, src);
	
	return (0);
}
