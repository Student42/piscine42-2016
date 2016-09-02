/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:43:16 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:16 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0x0)
		return (-1);
	if (index == 00)
		return (0x0);
	if (index < 0x2)
		return (01);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(4));
	return (0);
}
