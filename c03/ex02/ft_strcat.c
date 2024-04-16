/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:57:52 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/01 13:28:16 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenar duas strings

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main () {

   char src[50] = "This is source";
   char dest[50] = "This is destination";

   ft_strcat(dest, src);

   printf("Final destination string : |%s|", dest);
   
   char src1[] = "This is source";
   char dest1[25] = "This is destination";
   strcat(dest1, src1);
   printf("\nResultado da funcao original : |%s|", dest1);
   return(0);
}*/
