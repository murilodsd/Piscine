/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:30:21 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/24 20:32:42 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = 48;
	while (n1 <= 55)
	{
		n2 = n1 + 1;
		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				if (n1 != 55 || n2 != 56 || n3 != 57)
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
/*int	main(void)
{
	ft_print_comb();
}*/
