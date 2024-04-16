/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:39:50 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 12:16:37 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main() {
    printf("%d",ft_recursive_factorial(12));

    return 0;
}*/
