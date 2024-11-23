/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:28:01 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/12 10:37:20 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	int nb = 5;
	printf("Voici : %d\n", ft_recursive_factorial(nb));
	printf("Voici : %d\n", ft_recursive_factorial(0));
	printf("Voici : %d\n", ft_recursive_factorial(1));
	printf("Voici : %d\n", ft_recursive_factorial(-3));
	return 0;
}*/
