/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:35:34 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/08 23:06:13 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] > ' ' && argv[1][i] < 127)
			{
				write(1, &argv[1][i], 1);

				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == 9)
					break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

