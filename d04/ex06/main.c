/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:39:07 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:18 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb < 1073741827)
		for (int i = 2; i < (nb / 2) + 1; i++){if (nb % i == 0)
			return (0);}
	else
		for (int i = nb - 1; (i - 1) * 2 > nb; i--){if (nb % i == 0)
			return (0);}
	return (1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d : %s\n", 2, (ft_is_prime(2) ? "true" : "false"));
	printf("%d : %s\n", 12, (ft_is_prime(12) ? "true" : "false"));
	printf("%d : %s\n", 7, (ft_is_prime(7) ? "true" : "false"));
	printf("%d : %s\n", 23, (ft_is_prime(23)? "true" : "false"));
	printf("%d : %s\n", 24, (ft_is_prime(24)? "true" : "false"));
	printf("%d : %s\n", 97, (ft_is_prime(97)? "true" : "false"));
	printf("%d : %s\n", 98, (ft_is_prime(98)? "true" : "false"));
	printf("%d : %s\n", 5, (ft_is_prime(5)? "true" : "false"));
	printf("%d : %s\n", 21, (ft_is_prime(21)? "true" : "false"));
	printf("%d : %s\n", 1073741825, (ft_is_prime(1073741825)? "true" : "false"));
	return (0);
}
