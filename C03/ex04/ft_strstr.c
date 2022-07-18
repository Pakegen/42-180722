/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:45:45 by qallain           #+#    #+#             */
/*   Updated: 2022/07/18 16:12:20 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	if (to_find[0] == !'\0')
		return str;
	while (str[i] ! = '\0')
	{
		k = 0;
		while (str[i + k] ! = '\0' && str[i + j] == to_find)
		{
			return(&str[i]);
			k++;
		}
		i++
	}
	return 0;
}
