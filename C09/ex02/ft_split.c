/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:27:03 by lsogalho          #+#    #+#             */
/*   Updated: 2021/02/04 16:27:03 by lsogalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int		found_in_str(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	if (*charset == '\0')
	{
		if (c == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}

int		ft_countsplits(char *str, char *charset)
{
	int		count;
	char	*curr;
	char	*last;

	count = 0;
	curr = str;
	last = str;
	while (1)
	{
		if (*str)
		{
			if (found_in_str(*str, charset) == 1)
				curr = str;
			if (curr - last > 1)
				count++;
			curr = last;
			str++;
		}
		else
			break ;
	}
	return (count);
}

int		push_to_array(char **point, char *last, int len, char *charset)
{
	if (found_in_str(last[0], charset) == 1)
	{
		last++;
		len--;
	}
	*point = (char *)malloc((len + 3) * sizeof(char));
	ft_strncpy(*point, last, len);
	(*point)[len] = '\0';
	(*point)[len + 1] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	*curr;
	char	*last;
	char	**strs;

	i = 0;
	curr = str;
	last = str;
	strs = (char **)malloc((ft_countsplits(str, charset) + 1) * sizeof(char *));
	while (1)
	{
		if (found_in_str(*str, charset) == 1)
			curr = str;
		if ((len = curr - last) > 1)
		{
			i += push_to_array(&strs[i], last, len, charset);
		}
		if (*str == '\0')
			break ;
		last = curr;
		str++;
	}
	strs[i] = 0;
	return (strs);
}
