/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:34:22 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/24 17:22:42 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_fill(char **strs, char *sep, char *str_final, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	l = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str_final[l++] = strs[i][j++];
		if (i != size - 1)
		{
			k = 0;
			while (sep[k])
				str_final[l++] = sep[k++];
		}
	}
	str_final[l] = '\0';
	return (str_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_empty;
	char	*str_final;
	int		i;
	int		totlenstrs;
	int		totlensep;

	if (size == 0)
	{
		str_empty = malloc(sizeof(char) * 0 + 1);
		*str_empty = '\0';
		return (str_empty);
	}
	i = 0;
	totlenstrs = 0;
	while (i < size)
	{
		totlenstrs += ft_strlen(strs[i]);
		i++;
	}
	totlensep = ft_strlen(sep) * (size - 1);
	str_final = malloc(sizeof(char) * (totlensep + totlenstrs + 1));
	ft_fill(strs, sep, str_final, size);
	return (str_final);
}
/*
int	main(void)
{
	char	sep[] = "***";
	char	*strs[] = {"Bonjour", "Comment", "Cava"};
	char	*result;

	result = ft_strjoin(3, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Error malloc\n");
	return (0);
}*/
