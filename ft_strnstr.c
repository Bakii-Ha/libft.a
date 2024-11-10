/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:15:22 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/07 12:15:27 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strnstr(char *big, char *small, size_t len)
{
size_t i;
int j;

i = 0;
if(!big || !small)
    return(0);
if(small[i] == '\0')
    return((char *)big);
while( i < len && big[i] != '\0')
    {
        j = 0;
        while(big[i+j] == small[j] && i + j < len && small[j] != '\0')
            j++;

        if(small[j] == '\0')
            return ((char*)(big + i));

        i++;
    }
    return (NULL);
}

/*int main()
{
    char a[] = "baki hanma is the best men ever";
    char b[] = "best";

    printf("%s",ft_strnstr(a,b,32));
    return 0;
}*/