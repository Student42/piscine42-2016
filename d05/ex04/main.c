/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:56:18 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 11:19:39 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	if (src && *src){
	for (unsigned int i = 0; i <= n && src[i] + 1; ++i){
		dest[i] = src[i];
		j = i;}
	for (unsigned int i = j; i < n; ++i){
		dest[i] = '\0';
		j = i;}
	}
	dest[j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char *src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("mine : %s\n", ft_strncpy(src, "hello world", 4));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("true : %s\n", strncpy(src, "hello world", 4));
	free(src);

	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("mine : %s\n", ft_strncpy(src, "hello world ! Alllez Yoloswag YOLOLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", 1000000));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("true : %s\n", strncpy(src, "hello world ! Alllez Yoloswag YOLOLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", 1000000));
	free(src);

	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("mine : %s\n", ft_strncpy(src, "", 1000000));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("true : %s\n", strncpy(src, "", 1000000));
	free(src);

	src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("mine : %s\n", ft_strncpy(src, "hello world", -1));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("true : %s\n", strncpy(src, "hello world", -1));
	free(src);
	return (0);
}
