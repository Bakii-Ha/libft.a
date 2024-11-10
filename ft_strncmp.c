/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 01:34:36 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/04 01:34:38 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, size_t count)
{
    int i = 0;

    if(count == 0)
        return(0);

    while((i < count)  && (str1[i] || str2[i]))
    {
        if(str1[i] != str2[i])
            return(str1[i] - str2[i]);

        i++;
    }
    return (0);
}
/*int main ()
{
    char a[] = "hanma";
    char b[] = "hanmoo";
    printf("%d",ft_strncmp(a,b,6));
    printf("%d",strncmp(a,b,6));
    return 0;
}*/