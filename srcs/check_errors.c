/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:20:22 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/24 21:41:54 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(char **arg)
{
	long nb1;
	long nb2;
	int	i;
	int	j;
	
	i = 0;
	while (arg[i])
	{
		nb1 = ft_atol(arg[i]);
		if (nb1 > INT_MAX || nb1 < INT_MIN)
			return(0);
		j = i + 1;
		while (arg[j])
		{
			nb2 = ft_atol(arg[j]);
			if (nb1 == nb2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_number(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	if (ft_strlen(str) > 11)
		return (0);
	return (1);
}

int	get_sign(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if ((str[0] == '+' || str[0] == '-') && i == 0)
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);			
	}
	return (1);
}

void	check_empty_args(int ac, char **av)
{
	int	i;
	int	j;
	int	count;
	int	len;

	(void)ac;
	i = 0;
	while (av[i])
	{
		j = 0;
		count = 0;
		len = ft_strlen(av[i]);
		while (av[i][j])
		{
			if (av[i][j] == ' ')
				count++;
			j++;
		}
		if (count == len)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

int check_args(char **split_args)
{
	int i;

	i = 0;
	if (!check_double(split_args))
			return (0);
	while (split_args[i])
	{
		if (!get_sign(split_args[i]))
			return (0);
		if (!check_number(split_args[i]))
			return (0);
		i++;
	}
	return (1);
}
