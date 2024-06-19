/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:39:04 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/19 18:34:46 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct p_list
{
	int				number;
	int				nb;
	int				cost;
	int				index;
	int				cheap_cost;
	int				above_median;
	int				total_len;
	char			*str;
	char			*args;
	struct p_list	*next;
	struct p_list	*prev;
	struct p_list	*target;
}	t_swap;

char	*join_Args(int ac, char **av, t_swap *swap);
char	*split_Args(int ac, char **av, t_swap *swap);
int		len_Args(int ac, char **av, t_swap *swap);
t_swap *create_list(char **split);

#endif