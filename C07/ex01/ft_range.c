/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:48:21 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/15 19:09:47 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	size = (max - min);
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(3, 10);
	i = 0;
	while (i < 7)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
