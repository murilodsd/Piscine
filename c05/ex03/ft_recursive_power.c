/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:08:01 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 12:26:00 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_recursive_power(2, 0));
}*/