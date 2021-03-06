/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 12:14:02 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:39:12 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillheader.h"
#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char		*buff;
	int			size;
	t_p			tetriments[27];
	t_p			all_valid[19];
	char		map[15][15];
	
	if (argc != 2)
		error_exit(0);
	buff = (char *)malloc(sizeof(tetriments) + 1);
	read_file(argv[1], buff);
	execute(buff, tetriments, all_valid, map);
	free(buff);

	return (0);
}
