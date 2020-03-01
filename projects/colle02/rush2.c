/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:26:13 by rellis            #+#    #+#             */
/*   Updated: 2020/03/01 13:26:15 by rellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_count_inline(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\n')
	{
		count++;
	}
	return (count);
}

int		ft_count_lines(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (str[count] == '\n')
			count++;
	}
	return (count);
}

char	*ft_extract_line(char *str, int linenum)
{
	char *line;
	int i;
	int linecount;
	int len;
	int linestart;

	i = 0;
	linecount = 0;
	while (linecount < linenum)
	{
		if (str[i] == '\n')
			linecount++;
		i++;
	}
	linestart = i;
	len = 0;
	while (str[i] != '\n')
	{
		len++;
		i++;
	}
	line = (char*)malloc(sizeof(char*) * len);
	i = linestart;
	while (str[i] != '\n')
	{
		line[i - linestart] = str[i];
		i++;
	}
	return (line);
}

t_line	*ft_new_line()
{
	t_line	*line;

	line = (t_line*)malloc(sizeof(t_line*));
	line->left = NULL;
	line->mid = NULL;
	line->right = NULL;
	return (line);
}

t_line	*ft_get_line(char *str)
{
	t_line	*line;
	int		len;

	line = ft_new_line();
	len = ft_count_inline(*str);
	if (len > 0)
		line->left = str[0];
	if (len > 1)
		line->right = str[len - 1];
	if (len == 2)
		line->mid = str[1];
	return (line);
}

int		ft_check_line(t_line *line, int len, char *str, int start)
{
	int i;

	if (ft_count_inline(str) != len)
		return (0);
	if (len == 0)
		return (1);
	if (str[start] != line->left)
		return (0);
	if (len == 1)
		return (1);
	if (str[start + len - 1] != line->right)
		return(0);
	i = start + 1;
	while (i < start - 1)
	{
		if (str[i] != line->mid)
			return (0);
		i++;
	}
	return (1);
}

t_rect	*ft_new_rect()
{
	t_rect	*rect;
	t_line	*top;
	t_line	*mid;
	t_line	*bot;

	rect = (t_rect*)malloc(sizeof(t_rect*));
	top = ft_new_line();
	mid = ft_new_line();
	bot = ft_new_line();
	rect->h = 0;
	rect->w = 0;
	rect->top = *top;
	rect->mid = *mid;
	rect->bot = *bot;
	return (rect);
}

t_rect	*ft_getrect(char *str)
{
	t_rect	*rect;

	rect = ft_new_rect();
	rect->h = ft_count_lines(str);
	if (rect->h != 0)
	{

	}
	else
	{
		
	}
}

int		main(int argc, char **argv)
{

}
