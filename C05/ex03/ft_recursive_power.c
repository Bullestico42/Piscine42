/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:21:40 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/07 17:37:55 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 1)
	{
		i = i * ft_recursive_power(nb, power - 1);
	}
	return (i);
}
