/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:09:28 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/10 02:09:30 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *str;

    if(nmemb == 0 || size == 0)
        return (NULL);

    if (nmemb && SIZE_MAX / nmemb < size)
        return (NULL);

    str = malloc(nmemb size);

    if (!str)
        return (NULL);
    ft_bzero(str, nmemb * size);
    return (str);
}