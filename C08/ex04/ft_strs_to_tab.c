/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:37:00 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/22 13:05:26 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h> 

char	*ft_strdup(char *src)
{
	int		i;
	int		lensrc;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	lensrc = i;
	dest = malloc(sizeof(char) * (lensrc + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = -1;
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
		{
			while (i > 0)
				free(tab[--i].copy);
			free(tab);
			return (NULL);
		}
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
int	main(void)
{
	return (0);
}*/
