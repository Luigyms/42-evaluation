/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:42:13 by lsogalho          #+#    #+#             */
/*   Updated: 2021/02/01 21:27:18 by lsogalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(len * sizeof(char));
	len = 0;
	while (*src)
	{
		dup[len] = *src;
		src++;
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
