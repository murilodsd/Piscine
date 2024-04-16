/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:19:49 by mde-souz          #+#    #+#             */
/*   Updated: 2023/09/11 14:25:31 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' 
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	is_base_caracter(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signal;
	int	nb;

	signal = 1;
	if (check_base(base) == 0)
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= (-1);
		i++;
	}
	nb = 0;
	while (is_base_caracter(str[i], base) == 1)
	{
		nb = nb * str_length(base) + get_base_index(str[i], base);
		i++;
	}
	return (nb * signal);
}
