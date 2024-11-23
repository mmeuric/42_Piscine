/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:05:01 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/15 14:14:30 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	digit;

	digit = 0;
	i = -1;
	ft_lowcase(str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (digit == 0)
				str[i] -= 32;
			digit = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			digit = 1;
		else
			digit = 0;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	a[] = "        ***42SALUT & COMENT CA VA ?";
	char	b[] = "SSSSsSSalut, 42comment tu vante+et+un";
	printf("%s\n", ft_strcapitalize(a));
		printf("%s\n", ft_strcapitalize(b));

	return (0);
}*/
