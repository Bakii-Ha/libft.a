/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:51:41 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/04 00:51:44 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
 char *ft_strrchr(char *s, int c)
 
    {
        int i;
        i = strlen(s);
        if(!s)
            return (0);
        
        while(s[i] >= 0)
            {
                if(s[i] == c)
                    return ((char *)(s+i));

                i--;

            }
            if(c == '\0')
                return ((char *)(s));
            
            return 0;
    }
 
int main()
{
    char str[] = "Malak";
    printf("%s\n",ft_strrchr(NULL,'a'));
    return (0);
}