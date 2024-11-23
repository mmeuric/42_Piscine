/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:36:42 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/08 16:27:07 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	stock;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				stock = tab[i];
				tab[i] = tab[j];
				tab[j] = stock;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int a[] = {5,4,6,3,2,1};
	int size = 6;
	int i = -1;

	ft_sort_int_tab(a, size);
	while (++i < size)
		printf("Voici %d\n", a[i]);
	return 0;
}*/
