/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:57:02 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/27 20:08:18 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long int	n;
	long int	res;
	long int	sign;

	n = 0;
	res = 0;
	sign = 1;
	while ((nptr[n] >= 9 && nptr[n] <= 13) || nptr[n] == 32)
		n++;
	if (nptr[n] == '+')
		n++;
	else if (nptr[n] == '-')
	{
		sign *= -1;
		n++;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		res = res * 10 + nptr[n] - '0';
		n++;
	}
	return (res * sign);
}

int	find_min_arg(t_node **a, int old_min)
{
	t_node	*tmp;
	int		min;

	tmp = *a;
	min = INT_MAX;
	while (tmp)
	{
		if (min > tmp->data && tmp->data > old_min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

	int	list_size(t_node *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}