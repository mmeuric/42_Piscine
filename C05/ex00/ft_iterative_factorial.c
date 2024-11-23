/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:08:15 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/12 10:36:33 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	stock;

	stock = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (stock > 1)
	{
		nb = (nb * (stock - 1));
		stock--;
	}
	return (nb);
}
/*
int	main(void)
{	
	int nb = 5;
	printf("Voici : %d\n", ft_iterative_factorial(nb));
	return (0);
}*/
