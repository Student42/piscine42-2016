/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:08:12 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 10:56:38 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int j = 0;

	if (src && *src){
	for (int i = 0; src[i] + 1; ++i){
		dest[i] = src[i];
		j = i;}}
	dest[j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	char *src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("mine : %s\n", ft_strcpy(src, "hello world"));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world") + 1);
	printf("true : %s\n", strcpy(src, "hello world"));
	free(src);

	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("mine : %s\n", ft_strcpy(src, "hello world ! Alllez Yoloswag YOLOLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("true : %s\n", strcpy(src, "hello world ! Alllez Yoloswag YOLOLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	free(src);

	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("mine : %s\n", ft_strcpy(src, ""));
	free(src);
	src = (char *)malloc(sizeof(char) * strlen("hello world"));
	printf("true : %s\n", strcpy(src, ""));
	free(src);
	return (0);
}
