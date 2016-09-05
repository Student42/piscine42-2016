/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:50:51 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 14:52:51 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	int	i;

	for (i = 0; str[i] >= 0x41 && str[i] <= 90;++i);
	return (str[i] ? 0 : 1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_str_is_uppercase("abcd"));
	printf("%d\n", ft_str_is_uppercase("abCd"));
	printf("%d\n", ft_str_is_uppercase("abcd!"));
	printf("%d\n", ft_str_is_uppercase("!"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("ABCD"));
	printf("%d\n", ft_str_is_uppercase("ABCD!"));
	return (0);
}
