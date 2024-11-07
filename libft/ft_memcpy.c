/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:27:15 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/07 08:58:57 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*pd;
	unsigned char	*ps;

	if (dst == src)
		return (dst);
	if (n == 0)
		return (dst);
	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		pd[x] = ps[x];
		x++;
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s", ft_memcpy("abcd", "abcd", 3));
	printf("%s", memcpy("abcd", "abcd", 3));



}
*/
