/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:24:11 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 13:29:08 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	for (int i = 0; str[i]; ++i){ if (str[i] >= 0101 && str[i] <= 0x5a)
		str[i] += 32;
	}
	if (str[0] >= 0141 && str[0] <= 0x7a)
		str[0] -= 0x20;
	for (int i = 1; str[i]; ++i){
		if (str[i] >= 0x61 && str[i] <= 0172 &&
				(str[i - 1] == ' ' || (str[i - 1] > 8 && str[i - 1] < 14)))
			str[i] -= 040;
	}
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_strcapitalize(strdup("hello world")));
	printf("%s\n", ft_strcapitalize(strdup("hello world ! 0123456789 Swag\tyolo NewMot\vmot")));
	printf("%s\n", ft_strcapitalize(strdup("VOUS SUCEZ DES BITES !")));
	printf("%s\n", ft_strcapitalize(strdup("vous sucez des bites !")));
	return (0);
}
