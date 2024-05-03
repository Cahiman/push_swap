/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:38:29 by baiannon          #+#    #+#             */
/*   Updated: 2024/05/03 17:44:51 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *create_list(char **av)
{
	t_list *head;
	int	i;

	i = 0;
	head = NULL;
	while(av[i])
	{
		ft_atoi(av[i]);
		i++;
	}
}

t_list *end_list(t_list *head, int n)
{
	t_list *new = (t_list *)malloc(sizeof(t_list));

	
	new->number = n;
}

t_list *list_end(t_list *head, int n)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	
}