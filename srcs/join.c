/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:38:35 by baiannon          #+#    #+#             */
/*   Updated: 2024/06/19 18:45:02 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup_modified(const char *s)
{
	int		i;
	char	*dest;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	dest = malloc((len + 2) * sizeof(char));
	if (!s)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = ' ';
	dest[i + 1] = '\0';
	return (dest);
}
int len_Args(int ac, char **av, t_swap *swap)
{
	
	int	i;

	i = 1;
	while(av[i])
	{
		swap->total_len += ft_strlen(av[i] + 1);
		i++;
	}
	return (swap->total_len);
}

char *join_Args(int ac, char **av, t_swap *swap)
{
	int		i;

	swap->str = malloc(sizeof(char) * 100000 + 1);
	if (!swap->str)
		return (NULL);
	i = 1;
	while (ac > i)
	{
		swap->str = ft_strjoin(swap->str, av[i]);
		swap->str = ft_strdup_modified(swap->str);
		i++;
	}
	// ft_printf("%s", str);
	return (swap->str);
}

char *split_Args(int ac, char **av, t_swap *swap)
{
	(void)ac;
	(void)av;
	char	**split;
	
	swap->args = join_Args(ac, av, swap);
	split = ft_split(swap->args, ' ');
	// create_list(split);
	return(*split);
}