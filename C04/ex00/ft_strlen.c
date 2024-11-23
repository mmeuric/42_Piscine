/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:49:34 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/11 18:04:16 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	nb %= 10;
	nb += '0';
	write(1, &nb,1);
}

int	main(void)
{
	int	nb;

	char	a[] = "Bonjour";
	nb = ft_strlen(a);
	ft_putnbr(nb);
	return (0);
}*/
