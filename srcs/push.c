/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:08:35 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 17:04:31 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_node **a, t_node **b)
{
	t_node	*push;

	if (!*a)
		return (0);
	push = (*a);
	(*a) = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	if (!*b)
	{
		*b = push;
		push->next = NULL;
	}
	else
	{
		push->next = *b;
		push->next->prev = push;
		*b = push;
	}
	return (1);
}

void	ft_pa(t_node **b, t_node **a)
{
	if (ft_push(b, a) == 1)
		ft_printf("pa\n");
}

void	ft_pb(t_node **a, t_node **b)
{
	if (ft_push(a, b) == 1)
		ft_printf("pb\n");
}