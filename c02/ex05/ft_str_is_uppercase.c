/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:26:40 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 16:46:49 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return 1 se for tudo maiusculo

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main() {
	char minusculas[] = "soletrasminusculas";
	char maiusculas[] ="MSSAS";
	printf("Com letras minusculas %d\n",ft_str_is_uppercase(minusculas));	
	printf("So com maiuscula %d",ft_str_is_uppercase(maiusculas));
	return 0;
}*/
