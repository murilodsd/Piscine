/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:48:17 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/04 12:04:49 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	check_signal;
	int	num;

	num = 0;
	check_signal = 1; 
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			check_signal = check_signal * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10 + *str - '0');
		str++;
	}
	return (check_signal * num);
}
/*#include <stdio.h>
int	main()
{
	printf("%d",ft_atoi("\n\t -+-+-34234asd"));
}*/
