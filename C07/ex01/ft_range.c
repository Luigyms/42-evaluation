/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:04:14 by lsogalho          #+#    #+#             */
/*   Updated: 2021/02/01 21:27:18 by lsogalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int len;
	int *nums;

	len = max - min;
	if (min >= max)
		return (0);
	nums = (int *)malloc(len * sizeof(int));
	len = 0;
	while (min < max)
	{
		nums[len] = min;
		len++;
		min++;
	}
	return (nums);
}
