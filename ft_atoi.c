/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:33:49 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/07 15:33:50 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int    ft_atoi(const char *nptr)
{
    long    result;
    
    int (i), (sign);
    sign = 1;
    i = 0;
    result = 0;
    if (!nptr)
        return (0);
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+')
        i++;
    else if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
        if (result * sign > INT_MAX)
            return (INT_MAX);
    }
    return ((int)(result * sign));
}