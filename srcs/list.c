/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:21:34 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/19 16:51:52 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap *create_list(char **split)
{
	t_swap *head;
	int	i;

	i = 0;
	head = NULL;
	while(split[i])
	{
		ft_atoi(split[i]);
		i++;
	}
	return(head);
}

t_swap *list_end(t_swap *head, int n)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}