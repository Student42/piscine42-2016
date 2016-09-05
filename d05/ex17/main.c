/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:29:40 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 15:36:34 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		i2;

	for (i = 0; dest[i]; ++i);
	for (i2 = 0; src[i2] && nb-- > 0; ++i)
		dest[i] = src[i2++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char *s1 = (char *)malloc(sizeof(char) * 10);
	char *s2 = (char *)malloc(sizeof(char) * 20);
	s1 = strcpy(s1, "1234567890");
	s2 = strcpy(s2, "1234567890");
	printf("%s\n", ft_strncat(s2, s1, 4));
	free(s1);
	free(s2);
	s1 = (char *)malloc(sizeof(char) * 10);
	s2 = (char *)malloc(sizeof(char) * 20);
	s1 = strcpy(s1, "1234567890");
	s2 = strcpy(s2, "1234567890");
	printf("%s\n", strncat(s2, s1, 4));
	return (0);
}
