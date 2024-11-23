/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:05:18 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/11 10:21:44 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[100] = "Salut";
	char src[] = "c'est cool";
        char dest1[100] = "Salut";
        char src1[] = "c'est cool";
	
	printf("Voici : %s\n", ft_strcat(dest, src));
	printf("Voici : %s\n", strcat(dest1, src1));

	return (0);
}*/
