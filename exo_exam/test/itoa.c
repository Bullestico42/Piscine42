/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:27:41 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/12 17:09:56 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *revprint(char *str, int length)
{
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}

char *itoa(int num, char *str)
{
    int sign;
    int i;
    int res;

    sign = 0;
    i = 0;
    if (num == 0)
    {
        str = 0;
        return str;
    }
    if (num < 0)
    {
        sign = 1;
        num = -num;
    }
    while (num != 0)
    {
        res = num % 10;
        str[i] = res + '0';
        i++;
        num = num / 10;
    }
    if (sign)
        str[i++] = '-';

    str[i] = '\0';
    return revprint(str, i);
}

#include <stdio.h>
int main()
{
    char *str;
    printf("str is: %s\n", itoa(-1512, str));
    return 0;
}