/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 12:53:04 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 13:32:00 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	if (str[0] >= 0x41 && str[0] <= 90)
		str[0] += 32;
	for (int i = 1; str[i]; ++i){
		if (str[i] >= 0101 && str[i] <= 0x5a)
			str[i] += 040;
	}
	return (str);
}

#include <string.h>

int		main(void)
{
	printf("%s\n", ft_strlowcase(strdup("Hello World")));
	printf("%s\n", ft_strlowcase(strdup("Hello world ! 0123456789 Swag\tyolo NewMot\vmot")));
	printf("%s\n", ft_strlowcase(strdup("VOUS SUCEZ DES BITES !")));
	printf("%s\n", ft_strlowcase(strdup("vous sucez des bites !")));
	return (0);
}
