/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:42:50 by mmeuric           #+#    #+#             */
/*   Updated: 2024/09/05 16:31:32 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		write(1, &a, 1);
		a++;
	}
}

/*int	main(void)

{
	ft_print_alphabet();
	return(0);
}*/
