/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:55:32 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 17:10:38 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	copy_a;

	copy_a = *a;
	*a = *b;
	*b = copy_a;
}
/*#include <stdio.h>
int	main(void)
{	int *a;
	int *b;
	int x = 10;
	int y = 20;
	a = &x;
	b = &y;
	ft_swap(a,b);
	printf("valor inicial de *a = 10 e de *b = 20\n");
	printf("agora a eh %d e b eh %d", *a, *b);
}*/
