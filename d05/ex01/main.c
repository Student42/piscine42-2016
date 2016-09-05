/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:05:29 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 10:06:02 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	syscall(4, 1, &c, 1);
}

static void		ft_putsomething(void)
{
	ft_putchar(0x2d);
	ft_putchar(062);
	ft_putchar(061);
	ft_putchar(064);
	ft_putchar(067);
	ft_putchar(064);
	ft_putchar(070);
	ft_putchar(063);
	ft_putchar(066);
	ft_putchar(064);
	ft_putchar(070);
}

void			ft_putnbr(int nb)
{
	if (nb == 0x80000000)
		ft_putsomething();
	else
	{
		if (nb < 0){ft_putchar(055); nb = nb * -1;}
		if (nb < 10){ ft_putchar(nb + '0');}
		else { ft_putnbr(nb / 10); ft_putchar('0' + (nb % 10));}
	}
}

int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	return (0);
}
