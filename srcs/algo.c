/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:56:09 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/27 20:07:45 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remap(t_node *data)
{
	int i;
	int tmp;
	t_node *node;
	int len;
	
	i = 0;
	tmp = INT_MIN;
	len = list_size(data);
	while (i < len)
	{
		node = data;
		tmp = find_min_arg(&data, tmp);
		while (node->next && tmp != node->data)
			node = node->next;
		node->index = i;
		i++;
	}
	print_list(data);
}

int get_bits_number(t_node *stack)
{
	int get_iter;
	int	max_index;

	max_index = stack->index;
	get_iter = 0;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	while (max_index >> get_iter)
		get_iter++;
	return (get_iter);
}

void	sort_stacks(t_node **stack_a, t_node **stack_b)
{
	t_node *current_a_node;
	int	node_size;
	int	i;
	int	j;
	int	iter;

	i = 0;
	remap(*stack_a);
	current_a_node = *stack_a;
	node_size = list_size(current_a_node);
	iter = get_bits_number(*stack_a);
	while (i < iter)
	{
		j = 0;
		while (j++ < node_size)
		{
			current_a_node = *stack_a;
			if (((current_a_node->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (list_size(*stack_b) != 0)
			ft_pa(stack_a, stack_b);
		i++;
	}
}