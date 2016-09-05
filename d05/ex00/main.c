/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student42 <student42@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:01:13 by student42         #+#    #+#             */
/*   Updated: 2016/09/05 10:04:29 by student42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int		j;

	for (int i = 0; *str; str++)
		j = ++i;
	return (j);
}

void		ft_putstr(char *str)
{
	syscall(4, 1, str, ft_strlen(str));
}

int			main(void)
{
	ft_putstr("hello world\n");
	return (0);
}
