/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:14:28 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:38 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i = 0;
	int	n = 1;

	while (*str && (*str == ' ' || (str[i] > 8 && str[i] < 14)))
		++str;
	if (str[1] < '0')
		return (0);
	if (str[1] > '9')
		return (0);
	else
	{
	for (int j = 0; *str; str++){
		if (*str == 0x2d)
		{
			n = -1;
			continue ;
		}
		else if (*str == 0x2b)
			n = 1;
		else if (*str < '0' || *str > '9')
			return (i * n);
		else
			i = i * 10 + (*str - '0');
	}}
	return (i * n);
}

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int		main(void)
{
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("mine : %d\n", ft_atoi("-21b12"));
	printf("atoi : %d\n", atoi("-21b12"));
	printf("mine : %d\n", ft_atoi("+-23"));
	printf("atoi : %d\n", atoi("+-23"));
	printf("mine : %d\n", ft_atoi("-+23"));
	printf("atoi : %d\n", atoi("-+23"));
	printf("mine : %d\n", ft_atoi(" 	 -23"));
	printf("atoi : %d\n", atoi(" 	 -23"));
	printf("mine : %d\n", ft_atoi(" 	 - 23"));
	printf("atoi : %d\n", atoi(" 	 - 23"));
	printf("mine : %d\n", ft_atoi("\n-23"));
	printf("atoi : %d\n", atoi("\n-23"));
	return (0);
}
