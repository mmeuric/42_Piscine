/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:50:48 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/13 11:14:13 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	stock;

	stock = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (i < power && stock != 1)
	{
		nb = nb * stock;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int nb = -8;
	int power = 3;
	printf("Voici le resultat : %d\n", ft_iterative_power(nb, power));
}*/
