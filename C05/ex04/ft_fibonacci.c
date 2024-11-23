/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:10:52 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/11 18:54:33 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Voici5eme : %d\n",  ft_fibonacci(6));
        printf("Voici : %d\n",  ft_fibonacci(4));
        printf("Voici : %d\n",  ft_fibonacci(3));
        printf("Voici : %d\n",  ft_fibonacci(2));
        printf("Voici1er : %d\n",  ft_fibonacci(1));
        printf("Voici0 : %d\n",  ft_fibonacci(0));
        printf("Voici-5 : %d\n",  ft_fibonacci(-5));
}*/
