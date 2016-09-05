/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:06:05 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 15:28:53 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	for (i = 0; dest[i]; ++i);
	for (j = 0; src[j]; ++j)
		dest[i++] = src[j];
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
	printf("%s\n", ft_strcat(s2, s1));
	return (0);
}
