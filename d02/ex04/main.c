/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:26:59 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 16:00:06 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	syscall(4, 1, &c, 1);
}

void	ft_print_comb(void)
{
	for (int a = 0; a <= 7; a++){
		for (int b = a + 1; b <= 8; b++){
			for (int c = b + 1; c <= 9; c++){
				ft_putchar(a+'0');
				ft_putchar(b+'0');
				ft_putchar(c+'0');
				if (a != 7 || b != 8 || c != 9){
					ft_putchar(',');
					ft_putchar(' ');
				} else{ ft_putchar('\n');}}}}}

int		main(void)
{
	ft_print_comb();
	return (0);
}
