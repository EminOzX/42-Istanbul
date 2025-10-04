/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:22:17 by muhamoz           #+#    #+#             */
/*   Updated: 2025/09/30 14:00:45 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_2(int n)
{
	char	onlar_bas;
	char	birler_bas;

	onlar_bas = (n / 10) + '0';
	birler_bas = (n % 10) + '0';
	write(1, &onlar_bas, 1);
	write(1, &birler_bas, 1);
}

void	print_it(int a, int b)
{
	put_2(a);
	write(1, " ", 1);
	put_2(b);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (!(a == 98 && b == 99))
				print_it(a, b);
			else
			{
				put_2(a);
				write(1, " ", 1);
				put_2(b);
			}
			b++;
		}
		a++;
	}
}
