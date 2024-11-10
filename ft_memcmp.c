/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:15:04 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/10 02:15:06 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t  i;
    i = 0;

    if(n == 0 || str1 == 0 || str2 == 0)
        return 0;

    while(i < n)
    {
        if(((unsigned char *)str1)[i] == (((unsigned char *)str2)[i]))
            i++;

       else
            return ((unsigned char *)str1)[i] -((unsigned char *)str2)[i];
    }
    return 0;
}
/*int main()
{
    char a[] = "boki";
    char b[] = "bokii";
    printf("my:%d\n",ft_memcmp(a,b,6));
    printf("org:%d\n",memcmp(a,b,6));

    return 0;
}*\