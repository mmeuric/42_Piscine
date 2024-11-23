/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:10:02 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/23 19:03:20 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!*str || ft_strlen(str) == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] > 126 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		lenbase;

	lenbase = ft_strlen(base);
	n = nbr;
	if (ft_checkbase(base) == 1)
	{
		if (n < 0)
		{
			n = -n;
			write(1, "-", 1);
		}
		if (n < lenbase)
		{
			write(1, &base[n], 1);
		}
		if (n >= lenbase)
		{
			ft_putnbr_base(n / lenbase, base);
			ft_putnbr_base(n % lenbase, base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(15, "1");
	write(1, "\n", 1);
	ft_putnbr_base(8, "");
	write(1, "\n", 1);
	ft_putnbr_base(1116, "0123456789ABCDE+");
	write(1, "\n", 1);
	ft_putnbr_base(127, "01");
	write(1, "\n", 1);
	return (0);
}
*/