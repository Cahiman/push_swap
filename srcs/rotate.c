/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:37:33 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/19 16:35:30 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate_list(t_swap **swap)
{
	t_swap	*last;

	if (!*swap)
		return (0);
	last = found_last_list(*swap);
	last->next = *swap;
	*swap = (*swap)->next;
	(*swap)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
	return (1);
}

void	ft_ra(t_swap **a)
{
	if (rotate_list(a) == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_swap **b)
{
	if (rotate_list(b) == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_swap **a, t_swap **b)
{
	if (rotate_list(a) == 1 && rotate_list(b) == 1)
		ft_printf("rr\n");
}