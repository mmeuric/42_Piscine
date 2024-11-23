/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:05:18 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/10 09:27:20 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	lendest;

	a = 0;
	lendest = ft_strlen(dest);
	while (src[a] && a < nb)
	{
		dest[lendest + a] = src[a];
		a++;
	}
	dest[lendest + a] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[10] = "Bonjour ";
	char src[] = "la ville !";
        char dest1[10] = "Bonjour ";
        char src1[] = "la ville !";
	unsigned int i = 4;

	
	printf("Voici : %s\n", ft_strncat(dest, src, i));
	printf("Voici : %s\n", strncat(dest1, src1, i));

	return (0);
}*/
