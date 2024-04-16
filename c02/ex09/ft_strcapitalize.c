/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:36:36 by mde-souz          #+#    #+#             */
/*   Updated: 2023/08/30 17:10:40 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Retorna a string com maiusculas no comeco das palavras
// e minusculas no resto

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (i == 0 || !(
					(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& !(i == 0 || !(
					(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char minusculas[] = "ola, TuDo-BEM _coM 43voce";
	printf("%s",ft_strcapitalize(minusculas));
	return 0;
}*/
