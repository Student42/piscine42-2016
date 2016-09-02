/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:08:33 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 16:00:03 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	syscall(4, 1, &c, 1);
}

void	ft_print_alphabet(void)
{
	for (char a = 'a'; a <= 'z'; a++)
		ft_putchar(a);
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
