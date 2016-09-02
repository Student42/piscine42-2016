/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:57:02 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:32 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	a ^= b;
	b ^= a;
	a ^= b;
	*div = b % a;
	*mod = b / a;
	*div ^= *mod;
	*mod ^= *div;
	*div ^= *mod;
}

#include <stdio.h>

int		main(void)
{
	int		m;
	int		d;

	m = 0;
	d = m * 2 / 3;
	ft_div_mod(5, 2, &d, &m);
	printf("d : %d, m : %d\n", d, m);
	return (0);
}
