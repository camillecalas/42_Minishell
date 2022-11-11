/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <ccalas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:22:21 by ccalas            #+#    #+#             */
/*   Updated: 2022/07/25 14:38:35 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_null_bis(char *s1, char *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	free(s1);
	free(s2);
	return (dest);
}

char	*ft_strjoin_null(char *s1, char *s2)
{
	if (!s1)
	{
		s1 = ft_calloc(sizeof(char), 1);
		s1[0] = '\0';
	}
	if (!s2)
	{
		s2 = ft_calloc(sizeof(char), 1);
		s2[0] = '\0';
	}
	return (ft_strjoin_null_bis(s1, s2));
}
