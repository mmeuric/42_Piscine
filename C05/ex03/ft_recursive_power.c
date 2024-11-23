/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:27:34 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/13 11:15:36 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	int nb = 4;
	int power = 1;
	printf("voici : %d", ft_recursive_power(nb, power));
	return 0;
}*/
