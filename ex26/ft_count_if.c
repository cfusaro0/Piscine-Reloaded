/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 23:11:21 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/08 01:29:18 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (tab[a])
	{
		if (f(tab[a]))
			b++;
		a++;
	}
	return (b);
}
