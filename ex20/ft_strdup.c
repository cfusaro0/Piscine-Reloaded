/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:23:56 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/08 01:10:29 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	while (src[b])
		b++;
	str = (char*)malloc(sizeof(*str) * (b));
	if (str == NULL)
		return (NULL);
	while (a < b)
	{
		str[a] = src[a];
		a++;
	}
	str[b] = '\0';
	return (str);
}
