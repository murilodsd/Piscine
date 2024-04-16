/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:45:07 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 13:05:53 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < (nb / i) + 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/* #include <stdio.h>
int	main(void)
{
   printf("%d\n",ft_find_next_prime(-50));
   printf("%d\n",ft_find_next_prime(0));
   printf("%d\n",ft_find_next_prime(1));
   printf("%d\n",ft_find_next_prime(2));
   printf("%d\n",ft_find_next_prime(2100000000));
} */
