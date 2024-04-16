/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:43:54 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/02 17:20:58 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Encontra a primeira ocorrencia de uma string em outra string
//Retorna o ponteiro de onde comeca a string encontrada
//Ou um ponteiro nulo caso nao encontre

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main () {
   char haystack[20] = "shdsjhtstsssste";
   char needle[] = "";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}*/
