/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:06:08 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/02 16:46:18 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatena duas strings
//Colocamos um tamanho maximo para a uniao das duas
//Retornamos qual seria o tamanho das duas inteiras juntas
//Se size menor q o tamanho de dest nada eh feito  e retornamos size + s_src

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_dest;
	unsigned int	s_src;

	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	i = s_dest;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < s_dest)
		return (size + s_src);
	return (s_dest + s_src);
}
/*#include <stdio.h>
int main () {
   char src[20] = "This is too long";
   char dest[10] = "That";
   unsigned int length;
   length = ft_strlcat(dest, src, 30);
   printf("string : |%s|/nTamanho da string: %d", dest, length);
   return(0);
}*/
