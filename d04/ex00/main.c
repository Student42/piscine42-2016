/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:11:35 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:13 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int useless = 1;

	if (nb < 0x0 || nb > 014)
		return (00);
	if (nb == 0x0 || nb == 01)
		return (0x1);
	for (int i = 1; i <= nb; ++i)
		useless *= i;
	return (useless);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-42));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(42));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}
