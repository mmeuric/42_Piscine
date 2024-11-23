/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:31:00 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/23 15:09:58 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

/*
typedef struct s_stock_str
{
int					size;
char				*str;
char				*copy;
}					t_stock_str;

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
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	nb += 48;
	write(1, &nb, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(void)
{
	char				*strs[] = {"Hello", "World", "42", "Test"};
	int					size;
	struct s_stock_str	*tab;
	int					i;

	size = 4;
	tab = ft_strs_to_tab(size, strs);
	if (tab == NULL)
		return (0);
	ft_show_tab(tab);
	i = 0;
	while (i < size)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}*/
