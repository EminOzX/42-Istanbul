/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:34:41 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 23:10:31 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xdigit(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 33) && (str[i] <= 126)) && !(str[i] == 92))
		{
			write(1, &str[i], 1);
		}
		else
		{
			put_hex(str[i]);
		}
		if (str[i + 1] == '\0')
		{
			put_hex('\0');
			return ;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Hell\nHow are you?";

	ft_putstr_non_printable(str);
}