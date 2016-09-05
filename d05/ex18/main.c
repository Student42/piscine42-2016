/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:37:02 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 15:59:30 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	int		j;

	for (int i = 0; *str; str++)
		j = ++i;
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*strdest;
	char			*srcyolo;
	unsigned int	n;
	unsigned int	len;

	strdest = dest;
	srcyolo = src;
	n = size;
	for (;n-- != 0 && *strdest != '\0';)
		strdest++;
	len = strdest - dest;
	n = size - len;
	if (!n)
		return (len + ft_strlen(srcyolo));
	for (; *srcyolo;)
	{
		if (n != 1)
		{
			*strdest++ = *srcyolo;
			--n;
		}
		srcyolo++;
	}
	*strdest = '\0';
	return (len + (srcyolo - src));
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int				main(void)
{
	char	buf[10];
	char	buff[10];

	bzero(buf, 10);
	strcpy(buf, "abc");
	bzero(buff, 10);
	strcpy(buff, "abc");
	printf("%u\n", ft_strlcat(buf, "abcdefghijklmnop", 10));
	printf("%u\n", strlcat(buff, "abcdefghijklmnop", 10));
	return (0);
}
