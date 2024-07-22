/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:57:50 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 17:03:35 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_list(t_node **swap)
{
	t_node	*last_node;

	if (!*swap || !(*swap)->next)
		return (0);
	last_node = (*swap);
	while (last_node->next)
		last_node = last_node->next;
	last_node->prev->next = NULL;
	last_node->next = *swap;
	last_node->prev = NULL;
	*swap = last_node;
	last_node->next->prev = last_node;
	return (1);
}

void	ft_rra(t_node **a)
{
	if (reverse_list(a) == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_node **b)
{
	if (reverse_list(b) == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_node **a, t_node **b)
{
	if (reverse_list(a) == 1 && reverse_list(b) == 1)
		ft_printf("rrr\n");
}