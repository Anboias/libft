/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 17:42:15 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:17:10 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strtrim_front(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}
