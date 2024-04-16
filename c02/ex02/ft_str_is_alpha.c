/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:16:36 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 16:37:08 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retona 1 se so tiver letras
//Retorna 0 se tiver qq outra coisa

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main() {
    char string[] = "soletras";
    printf("So letras %d",ft_str_is_alpha(string));
    return 0;
}*/
