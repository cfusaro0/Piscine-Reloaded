/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:49:51 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/07 21:01:56 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
