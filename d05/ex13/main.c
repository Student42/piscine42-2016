/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:34:00 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 14:41:11 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int	i;

	for (i = 0; str[i] >= 0141 && str[i] <= 0x7b;++i);
	return (str[i] ? 0 : 1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcd"));
	printf("%d\n", ft_str_is_lowercase("abCd"));
	printf("%d\n", ft_str_is_lowercase("abcd!"));
	printf("%d\n", ft_str_is_lowercase("!"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
