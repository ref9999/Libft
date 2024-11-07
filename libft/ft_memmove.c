/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:20:33 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/07 11:14:12 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;
	char	*pd;
	char	*ps;

	x = 0;
	pd = (char *)dst;
	ps = (char *)src;
	if (pd == ps || len == 0)
		return (dst);
	if (pd > ps)
	{
		while (len-- > 0)
			pd[len] = ps[len];
	}
	else
	{
		while (x < len)
		{
			pd[x] = ps[x];
			x++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", ft_memmove("ghgh", "", 3));
	//printf("%s\n", memmove("ghgh", "", 3));



}
*/
