/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:00:42 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/05 22:45:53 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] < 'z')
			{
				c = argv[1][i] + 1;
				write(1, &c, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
			{
				c = argv[1][i] + 1;
				write(1, &c, 1);
			}
			else if (argv[1][i] == 'z')
			{
				c = argv[1][i] - 25;
				write(1, &c, 1);
			}
			else if (argv[1][i] == 'Z')
			{
				c = argv[1][i] - 25;
				write(1, &c, 1);
			}
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}

	write(1, "\n", 1);
	return 0;
}

