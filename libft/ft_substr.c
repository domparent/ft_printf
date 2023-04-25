/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:30:04 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/02 15:44:43 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	max;
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	max = ft_strlen(s);
	if (len > max)
		len = max;
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	while (start < max && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
