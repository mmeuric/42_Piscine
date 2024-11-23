/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:11:23 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/05 20:11:28 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock;
	int	trunk;

	stock = *a;
	trunk = *b;
	*a = (stock / *b);
	*b = (stock % trunk);
}
/*int	main(void)
{
	int a = 10;
	int b = 5;
			
	ft_ultimate_div_mod(&a, &b);
	printf("Voici a(2) : %d\n", a);
	printf("Voici b(0) : %d\n", b);

	return 0;
}*/
