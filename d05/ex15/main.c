/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:53:18 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 15:03:25 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int	i;

	for (i = 0; str[i] && str[i] >= 0x20 && str[i] <= 0176;++i);
	return (str[i] ? 0 : 1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_str_is_printable("abvc"));
	printf("%d\n", ft_str_is_printable("ab vc"));
	printf("%d\n", ft_str_is_printable("abvc!\t"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("\v\t"));
	return (0);
}
