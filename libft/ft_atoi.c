/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:51:47 by riel-fas          #+#    #+#             */
/*   Updated: 2024/10/26 09:51:47 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	x;

	result = 0;
	sign = 1;
	x = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x + 1] == '+' || str[x + 1] == '-')
			return (0);
		if (str[x] == '-')
			sign *= -1;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		result = result * 10 + (str[x] - 48);
		x++;
	}
	return (result * sign);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("  12345bcbcb"));

}*/
