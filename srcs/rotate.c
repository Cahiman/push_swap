/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:57:54 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 17:02:32 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate_list(t_node **swap)
{
	t_node	*last;

	if (!*swap)
		return (0);
	last = last_list(*swap);
	last->next = *swap;
	*swap = (*swap)->next;
	(*swap)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
	return (1);
}

t_node	*last_list(t_node *swap)
{
	if (!swap)
		return (NULL);
	while (swap->next)
		swap = swap->next;
	return (swap);
}

void	ft_ra(t_node **a)
{
	if (rotate_list(a) == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_node **b)
{
	if (rotate_list(b) == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_node **a, t_node **b)
{
	if (rotate_list(a) == 1 && rotate_list(b) == 1)
		ft_printf("rr\n");
}