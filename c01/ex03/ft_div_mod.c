/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:34:42 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/29 17:19:07 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int *pdiv;
	int *pmod;

	pdiv = &a;
	pmod = &b;
	ft_div_mod(11,2,pdiv,pmod);
	printf("11 dividido por 2 eh igual a %d com resto %d", a, b);
}*/
