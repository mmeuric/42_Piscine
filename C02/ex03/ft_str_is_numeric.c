/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:21:59 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/09 12:46:29 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= 48 && *str <= 56)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char a[] = "4565";
	char b[] = "456g6";
	char c[] = "";

	printf("Voici a(1) = %d\n", ft_str_is_numeric(a));
	printf("Voici b(0) = %d\n", ft_str_is_numeric(b));
	printf("Voici c(1) = %d\n", ft_str_is_numeric(c));

	return (0);
}*/
