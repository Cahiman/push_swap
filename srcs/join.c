/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:38:35 by baiannon          #+#    #+#             */
/*   Updated: 2024/05/31 18:23:40 by baiannon         ###   ########.fr       */
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
char *join_And_Split_Args(int ac, char **av)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 100000);
	i = 1;
	while (ac > i)
	{
		str = ft_strjoin(str, av[i]);
		str = ft_strdup_modified(str);
		i++;
	}
	ft_printf("%s", str);
	return (str);
}