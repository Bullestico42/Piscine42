/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:35:59 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/07 17:37:58 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 1)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
