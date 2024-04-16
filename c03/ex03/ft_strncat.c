/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:21:36 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/02 15:01:39 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatena apenas "nb" caracteres da segunda string

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main () {

   char src[50] = "This is source";
   char dest[50] = "This is destination";

   ft_strncat(dest, src, 0);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}*/
