/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:27:23 by rellis            #+#    #+#             */
/*   Updated: 2020/03/01 13:27:25 by rellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

# include <stdlib.h>

typedef struct	s_line
{
	char		left;
	char		mid;
	char		right;
}				t_line;

typedef struct	s_rect
{
	int			w;
	int			h;
	t_line		top;
	t_line		mid;
	t_line		bot;
}				t_rect;

#endif
