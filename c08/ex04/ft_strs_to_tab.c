/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:49:40 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/12 18:36:26 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_str)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}
/* void	ft_show_tab(struct s_stock_str *par);
int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
} */