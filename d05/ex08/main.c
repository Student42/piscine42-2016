/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 12:53:04 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 13:14:20 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{

	if (str[0] >= 0141 && str[0] <= 0x7a)
		str[0] -= 0x20;
	for (int i = 1; str[i]; ++i){
		if (str[i] >= 0x61 && str[i] <= 0172 &&
				(str[i - 1] == ' ' || (str[i - 1] > 8 && str[i - 1] < 14)))
			str[i] -= 040;
	}
	return (str);
}

#include <string.h>

int		main(void)
{
	printf("%s\n", ft_strupcase(strdup("hello world")));
	printf("%s\n", ft_strupcase(strdup("hello world ! 0123456789 Swag\tyolo NewMot\vmot")));
	return (0);
}
