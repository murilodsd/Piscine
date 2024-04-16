/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:52:22 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/13 16:43:50 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr_length(int nbr)
{
	int	i;

	i = 1;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);

}

long	ft_power(long nbr, int power)
{
	int	i;
	
	if (power == 0)
		return (1);
	i = 1;
	while(i < power)
	{
		nbr *= 10;
		i++;
	}
	return (nbr);
}


char	*ft_itoa(int nbr)
{
	char	*str;
	long		length;
	long		long_nbr;
	int		i;

	long_nbr = nbr;
	length = nbr_length(nbr);
	str = (char *)malloc(sizeof(char) * length + 1 + 1 * (nbr < 0));
	if (!str)
		return (0);
	i = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		i++;
		long_nbr = -long_nbr;
	}
	while (length > 0)
	{
		str[i] = (long_nbr / ft_power(10,length - 1)) % 10 + '0';
		i++;
		length--;
	}
	str[i] = '\0';
	return (str);
}