/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 02:47:55 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 03:13:54 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if((str[i] <= 'Z') && (str[i] >= 'A'))
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}

#include <stdio.h>

int main(void)
{
    char name[20] = "deneAB590239tEsvsFB";
    
    printf("%s", ft_strupcase(name));    
}