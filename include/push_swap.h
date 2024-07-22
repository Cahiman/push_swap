/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:39:04 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 17:06:25 by baiannon         ###   ########.fr       */
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
	// int	nbr;
	int	data;
	
	struct s_node *next;
}	t_node;


t_node	init_list(t_node *a, char **split);
// t_node	*fill_list(t_node *a, char **av);
char	**parse(char **av);
int	main(int ac, char **av);
void	*ft_free(char **s);
int	check_number(char *str);
int check_args(char **split_args);
long	ft_atol(const char *nptr);

#endif