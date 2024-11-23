/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:57:19 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/15 10:27:18 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	int	i;

	printf("Voici le resulat : %d\n", ft_sqrt(1));
	i = 0;
	while (i < 10)
	{
		printf("Voici le resulat : %d\n", ft_sqrt(i));
		i++;
	}
	return (0);
} */
