/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:27:18 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/05 12:36:27 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 2 || index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else 
		return (-1);
}
/* #include <stdio.h>
int	main(void)
 {
    printf("%d",ft_fibonacci(-1));
    return (0);
} */
