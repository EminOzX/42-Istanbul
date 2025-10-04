/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhamoz <muhamoz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:32:49 by muhamoz           #+#    #+#             */
/*   Updated: 2025/10/04 22:32:12 by muhamoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned    int i;

    i = 0;
    
    while(src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    return (i);
}

#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "rocket101";
    char src[] = "starship128";
    
    
    ft_strlcpy(dest, src, 5);

    printf("%s, %s", dest, src);
}
