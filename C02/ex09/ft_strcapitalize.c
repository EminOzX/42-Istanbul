/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 04:08:28 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 05:03:49 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((((str[i] <= 'z') && (str[i] >= 'a'))))
		str[i] = str[i] - 32;

		
	while (str[i] != '\0')
	{
		if (!(((str[i] <= 'z') && (str[i] >= 'a')) || (((str[i] <= 'Z')
						&& (str[i] >= 'A'))) || (((str[i] <= '9')
						&& (str[i] >= '0')))))
			{
				if (((str[i + 1] <= 'z') && (str[i + 1] >= 'a')))
					str[i + 1] = str[i + 1] - 32;
			}
			
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[100] = "hi, how are you? 42words forty-two; fifty+and+one";

	ft_strcapitalize(str);

	printf("'%s'", str);
}