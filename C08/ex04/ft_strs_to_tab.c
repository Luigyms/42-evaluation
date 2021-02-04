/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:06:40 by lsogalho          #+#    #+#             */
/*   Updated: 2021/02/04 00:07:14 by lsogalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*out;

	i = ft_strlen(src);
	if ((out = (char *)malloc(i * sizeof(char) + 1)) == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	i = 0;
	if (!(arr = malloc((ac + 1) * sizeof(struct s_stock_str))))
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i] = (struct s_stock_str){0, 0, 0};
	return (arr);
}
