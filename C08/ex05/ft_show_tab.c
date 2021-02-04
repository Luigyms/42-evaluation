/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:29:13 by lsogalho          #+#    #+#             */
/*   Updated: 2021/02/04 00:29:32 by lsogalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	ft_putnum(int num)
{
	char c;

	if (num > 9)
		ft_putnum(num / 10);
	c =  "0123456789"[num % 10];
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;	
	while (par[i].size != 0)
	{
		ft_putnum(par[i].size);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}