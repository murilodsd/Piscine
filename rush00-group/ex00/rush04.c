/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:46:26 by dramos-j          #+#    #+#             */
/*   Updated: 2023/08/27 23:23:15 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && x > 1 && y > 1))
				ft_putchar('A');
			else if ((l == 1 || l == y) && c > 1 && c < x)
				ft_putchar('B');
			else if ((c == 1 || c == x) && l > 1 && l < y)
				ft_putchar('B');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('C');
			else if (l > 1 && l < y && c > 1 && c < x)
				ft_putchar(' ');
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		l++;
	}
}
