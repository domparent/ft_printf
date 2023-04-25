/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:18:51 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/22 18:03:02 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = (int)ft_strlen(s1);
	s2len = (int)ft_strlen(s2);
	str = ft_calloc(sizeof(char), (s1len + s2len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + s1len, s2, ft_strlen(s2));
	return (str);
}
