/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:27:50 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 17:08:16 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Transforma tudo em minusculas

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main() {
	char maiusculas[] = "AlgumaSLETRASMAIUCULAS";
	printf("%s",ft_strlowcase(maiusculas));	
	return 0;
}*/
