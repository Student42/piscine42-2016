/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:25:32 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:14 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0x0 || nb > 014)
		return (00);
	if (nb == 0x0 || nb == 01)
		return (0x1);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-42));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(42));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(12));
	return (0);
}
