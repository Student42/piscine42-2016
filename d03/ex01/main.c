/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:06:04 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:29 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = *********nbr - *********nbr + 42;
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int	a = INT_MAX;
	int	*b = &a;
	int	**c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	ft_ultimate_ft(&i);
	printf("%d\n", a);
	return (0);
}
