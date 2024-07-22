/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:40:52 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 16:51:51 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	init_list(t_node *a, char **split)
{
	int i;

	i = 0;
	while (split[i])
	{
		a->data = ft_atol(split[i]);
		a->next = ft_calloc(sizeof(t_node), 1);
		if (!a->next)
			exit(EXIT_FAILURE);
		a = a->next;		
		i++;
	}
	return (*a);
}