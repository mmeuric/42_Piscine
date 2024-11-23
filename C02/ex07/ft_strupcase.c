/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:52:04 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/07 12:05:21 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*init;

	init = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	str = init;
	return (str);
}
/*
int	main(void)
{	
	char a[] = "bonjour tout le monde";
	printf("Voici : %s\n", ft_strupcase(a));
	return (0);
}
*/
