/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:01:55 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:17 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	for (int i = 0; i < (nb / 2); ++i){
		if ((i * i) == nb){ return (i);}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(12));
	printf("%d\n", ft_sqrt(16));
	return (0);
}
