/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:29:07 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:15 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		dollars;

	dollars = nb;
	if (power < 0x0)
		return (0);
	if (power == 00)
		return (1);
	for (int i = 1; i < power; ++i)
		nb *= dollars;
	return (nb);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_iterative_power(4, 3));
	return (0);
}
