/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:46:18 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/08 01:12:11 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	i = 0;
	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
