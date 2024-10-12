/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:36:40 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/06 15:01:06 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    long int result = 0;

    while (str[i] == ' ' || str[i] == '\t'|| str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-') 
            sign = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}/*
int main(void)
{
	ft_atoi("--21a21");
}*/
