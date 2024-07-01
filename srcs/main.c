/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:38:14 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/26 15:44:59 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
t_stack *a;
t_stack *b;

a = NULL;
b = NULL;
if (ac == 1 || (ac == 2 && !av[1][0]))
	return(1);
else if (ac == 2)
	av = ft_split(av[1], ' ');
init_stack_a(&a, av + 1);
if (!stack_sorted(a))
{
	if (stack_len(a) == 2)
		sa(&a, false);
	else if (stack_len(a) == 3)
		sort_three(&a);
	else
		sort_stacks(&a, &b);
}
	free_stack(&a);
	return (0);
}