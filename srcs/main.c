/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:38:29 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/19 18:37:20 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_swap swap;
	char *test;
	int i = 0;

	char *str;
	if (ac < 2)
		return (0);
	str = join_Args(ac, av, &swap);
	test = split_Args(ac, av, &swap);
	while(test[i])
	{
		ft_printf("%s\n", test[i]);
		i++;
	}
	return(1);
}