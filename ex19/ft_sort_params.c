/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:02:19 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/07 21:22:41 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] < s2[a])
			return (-1);
		if (s1[a] > s2[a])
			return (1);
		a++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			ft_swap(&argv[a], &argv[a + 1]);
			a = 1;
		}
		else
			a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
