/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 15:23:33 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/06 19:28:11 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iscntrl(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if ((ch >= 0 && ch <= 31) || ch == 127)
		return (1);
	return (0);
}
