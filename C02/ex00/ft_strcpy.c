/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:33:31 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/07 10:07:13 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#incude <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[100];
	char	*res;

	src = "Bonjour !";
	res = ft_strcpy(dest, src);
	printf("Voici le resulat : %s\n", res);
	return (0);
}*/
