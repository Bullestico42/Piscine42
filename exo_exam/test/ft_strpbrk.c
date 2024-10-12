/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:02:28 by apiscopo          #+#    #+#             */
/*   Updated: 2024/09/12 16:21:02 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *str(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == s2[i])
            return ((char*)&s1[i]);
        else
            i++;
            
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i;

    i = 0;
    printf("occurence is : %c\n", *str("acc", "cbc"));
    return 0;
}