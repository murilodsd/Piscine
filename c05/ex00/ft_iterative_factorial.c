/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:05:59 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 12:14:23 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*#include <stdio.h>

int main() {
    printf("%d",ft_iterative_factorial(12));

    return 0;
}*/
