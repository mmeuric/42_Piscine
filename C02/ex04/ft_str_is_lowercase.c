/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:33:42 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/07 11:42:35 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
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
