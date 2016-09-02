/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:38:13 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:15 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0x0)
		return (0);
	if (power == 00)
		return (1);
	if (power == 01)
		return (nb);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_recursive_power(4, 3));
	return (0);
}
