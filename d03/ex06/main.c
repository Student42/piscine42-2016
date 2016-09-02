/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:35:20 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:36 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	j;

	for (int i = 0; *str; str++)
		j = ++i;
	return (j);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_strlen("hello"));
	return (0);
}
