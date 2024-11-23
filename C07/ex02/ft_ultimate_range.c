/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:10:31 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/17 11:22:57 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
int	main(void)
{
	int	*range;
	int	i;

	printf("Voici la taille[7] : %d\n", ft_ultimate_range(&range, 3, 10));
	i = 0;
	while (i < 7)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
