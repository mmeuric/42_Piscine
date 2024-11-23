/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:52:23 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/09 09:39:48 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_verif(str[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{	
	char a[] = "Bonjourjeblablbla";
	char b[] = "Salut 42 ca va ?";
	char c[] = "";
	
	int res1 = ft_str_is_alpha(a);
	int res2 = ft_str_is_alpha(b);
	int res3 = ft_str_is_alpha(c);

	printf("Voici le resultat(1) : %s = %d\n", a, res1);
	printf("Voici le resultat(0) : %s = %d\n", b, res2);
	printf("Voici le resultat(1) : %s = %d\n", c, res3);
	return (0);
}*/
