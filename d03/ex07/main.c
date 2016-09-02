/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:38:38 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:36 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		j;
	int		tmp;

	tmp = 0;
	for (int i = 0; str[i]; ++i)
		j = i;
	++j;
	for (int k = 0; k < j--; k++)
	{
		tmp = str[k];
		str[k] = str[j];
		str[j] = tmp;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%s\n", ft_strrev(strdup("hello")));
	printf("%s\n", ft_strrev(strdup("ab")));
	return (0);
}
