/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:30:56 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/08 16:26:21 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	len;
	int	stock;

	i = 0;
	len = size - 1;
	while (i < size / 2)
	{
		stock = tab[i];
		tab[i] = tab[len];
		tab[len] = stock;
		i++;
		len--;
	}
}

/*int	main(void)
{
	int	a[6] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	int i = 0;

	ft_rev_int_tab(a, size);
	while (i < 6)
	{
	printf("Voici : %d\n", a[i]);
	i++;
	}

	return 0;
}*/
