/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:39:04 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/27 20:06:38 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_node
{
	int	data;
	int	index;
	
	struct s_node *next;
	struct s_node *prev;
}	t_node;


void	print_list(t_node *print);


long	ft_atol(const char *nptr);
char	**parse(char **av);

void	init_list(t_node *a, char **split);
void	remap(t_node *data);
void	check_empty_args(int ac, char **av);
void	*ft_free(char **s);

int		list_size(t_node *list);
int		list_size(t_node *lst);
int		find_min_arg(t_node **a, int old_min);
int		main(int ac, char **av);
int		check_number(char *str);
int		check_args(char **split_args);
int		get_bits_number(t_node *stack);

void	ft_pa(t_node **b, t_node **a);
void	ft_pb(t_node **a, t_node **b);

void	ft_rra(t_node **a);
void	ft_rrb(t_node **b);
void	ft_rrr(t_node **a, t_node **b);

t_node	*last_list(t_node *swap);
void	ft_ra(t_node **a);
void	ft_rb(t_node **b);
void	ft_rr(t_node **a, t_node **b);

void	ft_sa(t_node **a);
void	ft_sb(t_node **b);
void	ft_ss(t_node **a, t_node **b);

#endif