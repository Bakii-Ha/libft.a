/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:21:47 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/10 02:21:49 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strdup(const char *src)
 {
    size_t size;
    char *dest;

    if(!src)
        return (NULL);

    size = ft_strlen(src);

    dest = (char *)malloc(size * sizeof(char) + 1);
    if(!dest)
        return(NULL);

    ft_memcpy(dest,src,size);
    dest[size] = '\0';
    return (dest);
 }