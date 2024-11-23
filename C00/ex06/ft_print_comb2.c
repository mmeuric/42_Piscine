/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:41:22 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/18 16:23:08 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int n)
{
	if (n >= 10)
	{
		ft_write(n / 10);
		n = n % 10;
	}
	if (n < 10)
		n = n + '0';
	write (1, &n, 1);
}

int	ft_verif(int i, int j)
{
	if (i / 10 == 9 && i % 10 == 8 && j / 10 == 9 && j % 10 == 9)
		return (1);
	else
		return (0);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write(i / 10);
			ft_write(i % 10);
			write (1, " ", 1);
			ft_write(j / 10);
			ft_write(j % 10);
			if (!ft_verif(i, j))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
