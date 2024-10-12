/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:45:41 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/09 13:40:02 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	x;

	x = 0;
	i = 2;
	if (nb == 0 || nb < 0)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}
