/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:19:19 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 17:23:10 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	copy_a;

	copy_a = *a;
	*a = *a / *b;
	*b = copy_a % *b;
}
/*#include <stdio.h>
int	main(void)
{
	int a = 11;
	int b = 2;
	int *pdiv;
	int *pmod;

	pdiv = &a;
	pmod = &b;
	ft_ultimate_div_mod(pdiv,pmod);
	printf("11 dividido por 2 eh igual a %d com resto %d", *pdiv, *pmod);
}*/
