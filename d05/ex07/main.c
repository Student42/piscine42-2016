/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:57:48 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 12:37:28 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	for (; *s1++ == *s2++ && (*s1 || *s2) && n-- > 0;);
	return ((int)(*(unsigned char *)(--s1) - *(unsigned char *)(--s2)));
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%d\n", ft_strncmp("Bonjour", "Bonjour", 5));
	printf("%d\n", strncmp("Bonjour", "Bonjour", 5));
	printf("%d\n", ft_strncmp("Bonjour", "Bonx", 10));
	printf("%d\n", strncmp("Bonjour", "Bonx", 10));
	printf("%d\n", ft_strncmp("", "", 10));
	printf("%d\n", strncmp("", "", 10));
	return (0);
}
