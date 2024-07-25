/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:40:52 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/25 19:52:09 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_list(t_node *a, char **split)
{
	int i;
    
	i = 0;
    a->data = ft_atol(split[i++]);
    a->next = NULL;
    
    t_node *current = a;
    while (split[i]) {
        t_node *new_node = ft_calloc(1, sizeof(t_node));
        if (!new_node) {
            exit(EXIT_FAILURE);
        }
        new_node->data = ft_atol(split[i]);
        new_node->next = NULL;
        
        current->next = new_node;
        current = new_node;
        i++;
    }
}