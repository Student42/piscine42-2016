/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:57:48 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 12:25:34 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	for (; *s1++ == *s2++ && (*s1 || *s2););
	return ((int)(*(unsigned char *)(--s1) - *(unsigned char *)(--s2)));
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%d\n", ft_strcmp("Bonjour", "Bonjour"));
	printf("%d\n", strcmp("Bonjour", "Bonjour"));
	printf("%d\n", ft_strcmp("Bonjour", "Bon"));
	printf("%d\n", strcmp("Bonjour", "Bon"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", strcmp("", ""));
	return (0);
}
