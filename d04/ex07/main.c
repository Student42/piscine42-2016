/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:02:54 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:19 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb < 1073741827)
		for (int i = 2; i < (nb / 2) + 1; i++){if (nb % i == 0)
			return (0);}
	else
		for (int i = nb; (i - 1) * 2 > nb; i--){if (nb % i == 0)
			return (0);}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	for (int i = nb + 1; i != 0x7FFFFFFF; ++i)
	{
		if (ft_is_prime(i))
			return (i);
	}
	return (nb);
}

#include <stdio.h>
#include <limits.h>

int			main(void)
{
	printf("next for %d : %d\n", 2, ft_find_next_prime(2));
	printf("next for %d : %d\n", 19, ft_find_next_prime(19));
	printf("next for %d : %d\n", 2147483628, ft_find_next_prime(2147483628));
	printf("next for %d : %d\n", 1073741823, ft_find_next_prime(1073741823));
	return (0);
}
