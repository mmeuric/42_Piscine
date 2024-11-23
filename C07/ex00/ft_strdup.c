/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:23:38 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/15 14:30:02 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *a = "";
		char *b = "";

	printf("Voici : %s\n", ft_strdup(a));
		printf("Voici : %s", strdup(b));

	return (0);
}*/
