/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:15:42 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/08 04:16:22 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;
	int o;

	n = 1;
	o = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (n <= nb)
	{
		o = o * n;
		n++;
	}
	return (o);
}
