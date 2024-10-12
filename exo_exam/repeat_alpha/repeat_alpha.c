/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:28:51 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/08 23:06:14 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int res;
	char c;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];

			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				res = c - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				res	= c - 'A' + 1;
			else
			{
				write(1, &argv[1][i], 1);
			}
			while (res >= 1)
			{
				write(1, &c, 1);
				res--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
