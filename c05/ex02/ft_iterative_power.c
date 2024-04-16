/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:49:59 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 12:23:03 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = 2;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*#include <stdio.h>

int main() {
    printf("%d",ft_iterative_power(1,1));

    return 0;
}*/
