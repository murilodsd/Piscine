/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:55:59 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/06 19:28:05 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retorna 1 se for so numeros
//Retorna 0 se tiver algum outro caractere

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main() {
    char numeros[] = "654";
    char letras[] ="\n";
    printf("So numeros %d\n",ft_str_is_numeric(numeros));
    printf("Com letras %d",ft_str_is_numeric(letras));
    return 0;
}*/
