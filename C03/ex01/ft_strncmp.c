/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:46:46 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/18 16:21:33 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char a[] = "pon";
	char b[] = "brn";
	int i = 0;
	int j = 0;

	printf("Voici pour ft_ : %d\n", ft_strncmp(a, b, i));
        printf("Voici pour ft_ : %d\n", ft_strncmp(a, b, i));
        printf("Voici pour  : %d\n", strncmp(a, b, j));
        printf("Voici pour  : %d\n", strncmp(a, b, j));

	return (0);
}*/
