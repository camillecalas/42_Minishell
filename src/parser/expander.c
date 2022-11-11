/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expander.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:02:57 by ccalas            #+#    #+#             */
/*   Updated: 2022/05/27 18:09:23 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"
#include "../../include/minishell_d.h"
#include "../../include/minishell_f.h"
#include "../../include/minishell_s.h"

char	*expander(t_sh *sh, char *dollar)
{
	t_env	*tmp;

	tmp = sh->env_lst;
	while (tmp != NULL)
	{
		if (tmp->key && (ft_strcmp(tmp->key, dollar) == 0))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
