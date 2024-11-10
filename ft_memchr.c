/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:37:33 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/05 14:37:36 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *ptr, int value,size_t num)
{
    size_t i;
    i = 0;


    if(num == 0)
        return (0);
    
    while(i < num && ((unsigned int*)ptr)[i] != value)
    {
        if(((unsigned int*)ptr)[i] == value);
            return (((unsigned char*)ptr)[i]);
        
        i++;
    }
    return (0);
}

int main ()
{
    char a[] = "baki";
   

    printf("%s\n",ft_memchr(a,'k',4));
    return 0;
}