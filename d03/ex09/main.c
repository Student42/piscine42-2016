/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:14:28 by student42         #+#    #+#             */
/*   Updated: 2016/09/02 15:59:39 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int k = 1;
	for (int i = 1; k == 1; i++)
	{
		k = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				tab[j] ^= tab[j + 1];
				tab[j + 1] ^= tab[j];
				tab[j] ^= tab[j + 1];
				k = 1;
			}
		}
	}
}

#include <stdio.h>

int		main(void)
{
	int		*tab;

	tab = (int [6]){0};
	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 0;
	tab[5] = -1;
	for (int j = 0; j < 6; j++)
	{
		printf("%d\n", tab[j]);
	}
	printf("\n");
	ft_sort_integer_table(tab, 6);
	for (int j = 0; j < 6; j++)
	{
		printf("%d\n", tab[j]);
	}
	return (0);
}
