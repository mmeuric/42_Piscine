/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:58:21 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/15 14:15:54 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char p)
{
	write(1, &p, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	mv_str;

	while (*str)
	{
		hex = "0123456789abcdef";
		mv_str = (unsigned char)*str;
		if (*str > 126 || *str < 32)
		{
			ft_putchar('\\');
			ft_putchar(hex[mv_str / 16]);
			ft_putchar(hex[mv_str % 16]);
		}
		else
		{
			ft_putchar(mv_str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char a[] = "Coucou\ntu vas\t bien ?";
	ft_putstr_non_printable(a);
	return (0);
}*/
