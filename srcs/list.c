/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:21:34 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/06 17:40:08 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

p_list *create_list(char **split)
{
	p_list *head;
	int	i;

	i = 0;
	head = NULL;
	while(split[i])
	{
		ft_atoi(split[i]);
		i++;
	}
}
	p_list *enp_list(p_list *head, int n)
{
	p_list *new = (p_list *)malloc(sizeof(p_list));

	
	new->number = n;
}

p_list *list_end(p_list *head, int n)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}