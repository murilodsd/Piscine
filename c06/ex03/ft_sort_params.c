/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:53:26 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 14:50:18 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(const char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*copy_argv;

	i = 1;
	while (i < argc)
	{
		j = argc - 1;
		while (j > i)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				copy_argv = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = copy_argv;
			}
			j--;
		}
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		i++;
	}
}
