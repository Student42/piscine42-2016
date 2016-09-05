/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:27:06 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 14:30:03 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int	i;

	for (i = 0; str[i] && str[i] >= 0x30 && str[i] <= 57; ++i);
	return (str[i] ? 0 : 1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("-42"));
	printf("%d\n", ft_str_is_numeric("abcd!"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
