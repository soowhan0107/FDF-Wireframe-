/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:37:42 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/27 13:14:35 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	t_total total;

	ft_bzero(&total, sizeof(total));
	if (ac != 2)
		ft_error_msg("./fdf [FILE_NAME]");
	ft_init_val(&total);
	ft_read_file(&av[1], &total);
	total.mlx = mlx_init();
	total.win = mlx_new_window(total.mlx, total.def_wid, total.def_hgt,
			"FDF");
	ft_plot_setup(&total);
	ft_plot_pt(&total);
	mlx_hook(total.win, 2, 2, ft_window_key, &total);
	mlx_hook(total.win, 12, 2, ft_window_expose, &total);
	mlx_loop(total.mlx);
	return (0);
}
