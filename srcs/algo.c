/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:56:09 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/25 19:51:27 by baiannon         ###   ########.fr       */
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