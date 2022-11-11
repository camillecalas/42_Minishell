/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <ccalas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:20:02 by ccalas            #+#    #+#             */
/*   Updated: 2022/06/27 15:15:14 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	*ft_strjoin_2(char **s1, char **s2)
// {
// 	char	*dest;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (!(*s1))
// 	{
// 		(*s1) = malloc(sizeof(char) * 1);
// 		(*s1)[0] = '\0';
// 	}
// 	if (!(*s2))
// 	{
// 		(*s2) = malloc(sizeof(char) * 1);
// 		(*s2)[0] = '\0';
// 	}
// 	dest = ft_calloc(sizeof(char), (ft_strlen((*s1)) + ft_strlen((*s2)) + 1));
// 	if (!dest)
// 		return (NULL);
// 	while ((*s1)[i] != '\0')
// 	{
// 		dest[i] = (*s1)[i];
// 		i++;
// 	}
// 	while ((*s2)[j] != '\0')
// 	{
// 		dest[i] = (*s2)[j];
// 		j++;
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	// free(s1);
// 	// free(s2);
// 	return (dest);
// }

char	*ft_strjoin_2(char **s1, char **s2)
{
	char	*dst;
	size_t	dst_size;
	size_t	i;
	size_t	j;

	if (!*s1 && !*s2)
		return (NULL);
	dst_size = ft_strlen(*s1) + ft_strlen(*s2) + 1;
	dst = ft_calloc(dst_size, sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, *s1, dst_size);
	j = 0;
	i = ft_strlen(dst);
	while ((*s2)[j] && (i + j + 1 < dst_size))
	{
		dst[i + j] = (*s2)[j];
		j++;
	}
	if (i != dst_size)
		dst[i + j] = 0;
	ft_free_null_str(s1);
	ft_free_null_str(s2);
	return (dst);
}
