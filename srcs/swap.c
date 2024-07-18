/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:02:47 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/18 22:17:51 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:43:59 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 07:43:36 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_list(t_node **swap)
{
	int	temp;

	if (!swap || !(*swap)->next)
		return (0);
	temp = (*swap)->data;
	(*swap)->data = (*swap)->next->data;
	(*swap)->next->data = temp;
	return (1);
}

void	ft_sa(t_node **a)
{
	if (swap_list(a) == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_node **b)
{
	if (swap_list(b) == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_node **a, t_node **b)
{
	if (swap_list(a) == 1 && swap_list(b) == 1)
		ft_printf("ss\n");
}