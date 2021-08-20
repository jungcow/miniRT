/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_cy_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungwkim <jungwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 03:35:10 by jungwkim          #+#    #+#             */
/*   Updated: 2021/04/10 03:52:06 by jungwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create.h"

void	scale_cylinder(void *obj, int key)
{
	t_cylinder		*cy;

	cy = (t_cylinder *)obj;
	if (key == KEY_E)
	{
		cy->height += 1;
		cy->diameter += 1;
	}
	else if (key == KEY_R)
	{
		cy->height -= 1;
		cy->diameter -= 1;
	}
}

void	rotate_cylinder(void *obj, int key, double angle)
{
	t_cylinder		*cy;

	cy = (t_cylinder *)obj;
	if (key == KEY_X)
		x_axis_rotate(&cy->orient, angle);
	if (key == KEY_Y)
		y_axis_rotate(&cy->orient, angle);
	if (key == KEY_Z)
		z_axis_rotate(&cy->orient, angle);
}

void	translate_cylinder(void *obj, int key)
{
	t_cylinder		*cy;

	cy = (t_cylinder *)obj;
	if (key == ARROW_LEFT)
		cy->point.x -= 1;
	else if (key == ARROW_RIGHT)
		cy->point.x += 1;
	else if (key == ARROW_DOWN)
		cy->point.z -= 1;
	else if (key == ARROW_UP)
		cy->point.z += 1;
	else if (key == KEY_B)
		cy->point.y -= 1;
	else if (key == KEY_F)
		cy->point.y += 1;
}
