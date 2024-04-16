/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:47:32 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/13 22:54:56 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		put_word(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
		write(1, str++, 1);
}

int			main(int ac, char **av)
{
	int		i;
        char    *str;

        str = av[1];
	if (ac == 2)
	{
		i = 0;
		while (str[i])
			i++;
		i--;
		while (str[i] && i > 0)
		{
			while (str[i] != ' ' && str[i] != '\t' && i >= 0)
				i--;
			put_word(str + i + 1);
			if (i > 0)
				ft_putchar(' ');
			while ((str[i] == ' ' || str[i] == '\t') && i > 0)
				i--;
		}
	}
	ft_putchar('\n');
	return (0);
}