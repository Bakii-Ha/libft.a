/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:12:26 by afadlaou          #+#    #+#             */
/*   Updated: 2024/10/31 21:12:28 by afadlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	o;

	i = n - 1;
	if (!dest || !src)
		return (0);
	if (dest >= src)
	{
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (o <= n)
		{
			((unsigned char *)dest)[o] = ((unsigned char *)src)[o];
			o++;
		}
	}
	return (dest);
}
