/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:08:33 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 16:00:05 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	syscall(4, 1, &c, 1);
}

void	ft_is_negative(int n)
{
	(n >= 0) ? ft_putchar('P') : ft_putchar('N');
}

int main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	return (0);
}
