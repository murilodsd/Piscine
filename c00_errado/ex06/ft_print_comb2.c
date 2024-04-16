/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:12:01 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/25 12:12:09 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c1, char c2)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10 + '0', n1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(n2 / 10 + '0', n2 % 10 + '0');
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
}*/
