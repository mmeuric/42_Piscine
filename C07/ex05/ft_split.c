/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:49:45 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/23 22:05:29 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_checksep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src, int fin, int len)
{
	int	i;
	int	start;

	i = 0;
	start = fin - len;
	while (i < len)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	boul;

	if (!*str || !str)
		return (0);
	i = 0;
	count = 0;
	boul = 1;
	while (str[i])
	{
		while (ft_checksep(str[i], charset) == 1 && str[i])
			i++;
		while (ft_checksep(str[i], charset) == 0 && str[i])
		{
			i++;
			boul = 1;
		}
		if (boul == 1)
			count++;
		boul = 0;
	}
	return (count);
}

void ft_fill(char *str, char *charset, char **tab, int boul)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        j = 0;
        boul = 0;
        while (ft_checksep(str[i], charset) == 1 && str[i])
            i++;
        while (ft_checksep(str[i], charset) == 0 && str[i])
        {
            boul = 1;
            i++;
            j++;
        }
        if (boul == 1)
        {
			tab[count] = malloc(sizeof(char) * (j + 1));
        	ft_strcpy(tab[count], str, i, j);
            count++;
        }
    }
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_words;
	int		i;
	int		boul;

	i = 0;
	nb_words = ft_count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (NULL);
	boul = 0;
	ft_fill(str, charset, tab, boul);
	tab[nb_words] = NULL;
	return (tab);
}

int	main(void)
{
	char	str[] = "  to to  ";
	char	*charset;
	char	**tab;
	int		i;

	charset = " ";
	i = 0;
	tab = ft_split(str, charset);
    i = 0;
    while (i <= ft_count_words(str, charset))
    {
        printf("[%s]\n", tab[i]);
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}
