/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:54:36 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/31 14:03:12 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_abs(int n)
{
	if (n < 0)
		n *= (-1);
	return (n);
}
