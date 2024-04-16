/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:55:56 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 17:01:46 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retorna 1 se so tiver caracteres imprimiveis

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main() {
	char naoimprimivel[] = "\asoletrasminusculas";
	char imprimivel[] ="Maisuculas";
	printf("So imprimiveis %d\n",ft_str_is_printable(imprimivel));	
	printf("Com nao imprimivel %d",ft_str_is_printable(naoimprimivel));
	return 0;
}*/
