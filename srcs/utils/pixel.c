/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:56:30 by lcardiga          #+#    #+#             */
/*   Updated: 2022/11/17 02:56:32 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

void	pixel_put(t_pixel *pixel, int x, int y, int color)
{
	char	*dst;

	dst = pixel->addr + (y * pixel->line_len + x * (pixel->bpp / 8));
	*(unsigned int *)dst = color;
}

int	get_pixel_color(t_textures *txt, int x, int y)
{
	int	color;

	color = *(unsigned int *)(txt->img_data
			+ (y * txt->line_len + x * (txt->bpp / 8)));
	return (color);
}
