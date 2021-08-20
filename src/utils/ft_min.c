/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungwkim <jungwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:34:03 by jungwkim          #+#    #+#             */
/*   Updated: 2021/04/02 21:40:07 by jungwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

double	ft_min(double a, double b)
{
	if (a < b)
		return (a);
	return (b);
}