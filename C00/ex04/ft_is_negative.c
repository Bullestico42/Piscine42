/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:02:42 by apiscopo          #+#    #+#             */
/*   Updated: 2024/08/21 11:44:30 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < '0')
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_is_negative('5');
	return (0);
}*/
