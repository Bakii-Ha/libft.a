/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:37:27 by afadlaou          #+#    #+#             */
/*   Updated: 2024/11/10 02:37:29 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(s[i])
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
}

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s,fd);
    write(fd,"\n",1);
}
int main()
{
    char a[]= "baki hanma";
    ft_putendl_fd(a,1);
    return 0;
}
