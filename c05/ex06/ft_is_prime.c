/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:22:54 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 13:06:19 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int	main(void)
{
   printf("%d\n",ft_is_prime(-1));
   printf("%d\n",ft_is_prime(104723));
   printf("%d\n",ft_is_prime(1));
   printf("%d\n",ft_is_prime(13));
   printf("%d",ft_is_prime(0));
} */
