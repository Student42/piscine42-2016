/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:16:23 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 14:25:01 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int	i;

	for (i = 0; str[i] && ((str[i] >= 0141 && str[i] <= 0x7b)
				|| (str[i] >= 0x41 && str[i] <= 90)); ++i);
	return (str[i] ? 0 : 1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_str_is_alpha("abcd"));
	printf("%d\n", ft_str_is_alpha("abcd!"));
	printf("%d\n", ft_str_is_alpha("!"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
