/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:32:22 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 16:00:07 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	syscall(4, 1, &c, 1);
}

void	ft_print_comb2(void)
{
	for (int a = 0; a <= 98; a++){
		for (int b = a + 1; b <= 99; b++){
			if (a < 10){ ft_putchar('0' + 0);}else{ft_putchar('0' + (a / 10));}
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			if (b < 10){ ft_putchar('0' + 0);}else{ft_putchar('0' + (b / 10));}
			ft_putchar('0' + (b % 10));
			if (a == 98 && b == 99){ ft_putchar('\n');}else{ ft_putchar(','); ft_putchar(' ');}
		}}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
