/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:21:42 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 11:56:59 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strlen(char *str)
{
	int		j;

	for (int i = 0; *str; str++)
		j = ++i;
	return (j);
}

static int		ft_strstrcmp(const char *s1, const char *s2, size_t n)
{
	for (int i = 0; n > 0; ++i)	{
		if (*s1 != *s2)
			return ((*(unsigned char *)s1 - *(unsigned char *)s2));
		else if (!*s1)
			return (0);
		s1++;
		s2++;
		--n;}
	return (0);
}

char *ft_strstr(char *str, char *to_find)
{
	int		len;
	int		len2;

	if (!*to_find)
		return ((char *)str);
	len = ft_strlen(str);
	len2 = ft_strlen(to_find);
	for (int i = 0; *str && len >= len2; --len){
		if (ft_strstrcmp(str, to_find, len2) == 0)
			return ((char *)str);
		str++;}
	return (NULL);
}

#include <stdio.h>

int		main(void)
{
	char *s1 = strdup("hello word world");
	char *s2 = strdup("world");
	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, ""));
	printf("%s\n", ft_strstr(s1, ""));
	printf("%s\n", strstr(s1, "worl"));
	printf("%s\n", ft_strstr(s1, "worl"));
	return (0);
}
