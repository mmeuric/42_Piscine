/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:33:42 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/07 11:46:22 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char a[] = "bonjouefsjf";
	char b[] = "lhfjHfd e";
	char c[] = "";
	return (0);
}*/
