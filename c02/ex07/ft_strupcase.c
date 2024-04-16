/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:12:58 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 17:06:37 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Transforma tudo em maiusculas

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main() {
	char minusculas[] = "alguMasMinusculas";
	printf("%s",ft_strupcase(minusculas));	
	return 0;
}*/
