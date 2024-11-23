/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:10:23 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/09 14:27:03 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*init;

	init = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	str = init;
	return (str);
}
/*
int	main(void)
{
	char a[] = "MAGICARPE EVOLUE !!!";
	printf("Voici : %s\n", ft_strlowcase(a));
	return (0);
}*/
