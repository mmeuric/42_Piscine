/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:43:23 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/11 12:49:55 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (to_find[f] == '\0')
		return (str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[f])
		{
			while ((str[i + f] == to_find[f]) && to_find[f])
				f++;
		}
		if (f == ft_strlen(to_find))
			return (&str[i]);
		else
			f = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char b[] = "jou";
	char a[] = "Bonjjour";
	char b2[] = "jou";
        char a1[] = "Bonjjour";

	printf("Voici : %s\n", ft_strstr(a, b));
	printf("Voici : %s\n\n", strstr(a1, b2));

	return 0;
}*/
