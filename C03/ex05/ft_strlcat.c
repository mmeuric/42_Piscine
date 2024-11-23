/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:02:51 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/18 10:45:42 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (size <= lendest)
		return (lensrc + size);
	while (src[i] && i + lendest < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
/*
int	main(void)
{
	char	dest[100] = "A";
	char	src[] = "B";
	char	dest1[100] = "A";
	char	src1[] = "B";
	int		i;

	i = 13;
	printf("i = %d\n", i);
	printf("Voici int fausse strlcat : %d\n", ft_strlcat(dest, src, i));
	printf("Voici dest concat fausse : %s\n", dest);
	printf("Voici int vrai strlcat   : %ld\n", strlcat(dest1, src1, i));
	printf("Voici dest concat vrai   : %s\n\n\n", dest1);
	return (0);
}*/
