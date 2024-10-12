/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:19:05 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/07 17:37:53 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (i);
}

/*#include <stdio.h>
 
 int main(void)
 {
   printf("%d \n", ft_fibonacci(8));
   return (0);
 }*/