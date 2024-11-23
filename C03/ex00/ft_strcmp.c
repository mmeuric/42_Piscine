/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:39:12 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/09 14:39:34 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		diff = s1[i] - s2[i];
	return (diff);
}
/*
int	main(void)
{
	char a[] = "Bonjour";
	char b[] = "Bonjour";
	printf("Voici : %d\n", ft_strcmp(a, b));
	printf("Voici : %d\n", strcmp(a, b));


	return (0);
}*/
