/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:59:50 by apiscopo          #+#    #+#             */
/*   Updated: 2024/08/21 11:41:27 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 0;
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
