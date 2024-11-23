/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:05:46 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/26 12:05:49 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_checksep(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] && ft_checksep(charset, str[i]) == 1)
		{
			word = 0;
		}
		if (str[i] && ft_checksep(charset, str[i]) == 0 && word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_strcpy(char *dest, char *src, int start, int end)
{
	int	i;
	int	len;

	len = end - start;
	i = 0;
	while (i < len)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
}

void	ft_fill(char *str, char *charset, char **tab)
{
	int	start;
	int	end;
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_checksep(charset, str[i]) == 1)
			i++;
		start = i;
		while (str[i] && ft_checksep(charset, str[i]) == 0)
			i++;
		end = i;
		if (count < ft_count(str, charset))
		{
			tab[count] = malloc(sizeof(char) * (end - start + 1));
			ft_strcpy(tab[count], str, start, end);
			count++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_words;

	nb_words = ft_count(str, charset);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (0);
	ft_fill(str, charset, tab);
	tab[nb_words] = 0;
	return (tab);
}
/*
int	main(void)
{
	char	a[] = "bonjour toi je ne  \t  \t  ";
	char	b[] = " \t";
	char	**tab;
	int		nb;
	int		i;

	tab = NULL;
	nb = ft_count(a, b);
	printf("%d\n", nb);
	i = 0;
	tab = ft_split(a, b);
	while (i < nb)
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
