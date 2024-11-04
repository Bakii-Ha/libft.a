/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:39:21 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/03 23:39:24 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *s, int c)
{
    int i;
    i = 0;

    if(!s)
        return (0);

    while(s[i] && s[i] != c)
    {
    if(s[i] == c )
    {  
        return ((char *)(s+i));
    }
        i++;
    }

    if(c == '\0')
        return((char *)(s+i));

    return (0);
}

/*int main()
{
    char str[50] = "Malak";
    printf("%s\n",strchr(str,'a'));
    return (0);
}*/