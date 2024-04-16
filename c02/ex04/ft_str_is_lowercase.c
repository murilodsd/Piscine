/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:11:51 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 16:40:49 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retorna 1 se so tiver minuscula

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main() {
	char minusculas[] = "soletrasminusculas";
	char maiusculas[] ="Maisuculas";
	printf("So letras minusculas %d\n",ft_str_is_lowercase(minusculas));	
	printf("Com maiuscula %d",ft_str_is_lowercase(maiusculas));
	return 0;
}*/
