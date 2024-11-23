/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:08:19 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/09 19:40:25 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{	
	char	src[] = "Bonjour les gens !";
	char	dest[100];
	char	src1[] = "Bonjour les gens !";
	char	dest1[100];
	unsigned int 	l = 3;


	printf("Voici le resultat(Bon) : %s\n", ft_strncpy(dest, src, l));
	printf("Voici le resultat(Bon) : %s\n", ft_strncpy(dest1, src1, l));

	return (0);
}*/
