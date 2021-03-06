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

void	ft_rush2(char *str)
{
	int i = 0;
	int w = 0;
	int h = 0;
	
	while (str[i])
	{

		i++;
	}
}

int		main(int argc, char **argv)
{

}

/*
int		ft_count_inline(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\n')
	{
		if (str[count] == '\0')
		{
			return (-1);
		}
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
	rect->isrect = 1;
	rect->h = 0;
	rect->w = 0;
	rect->top = *top;
	rect->mid = *mid;
	rect->bot = *bot;
	return (rect);
}

int		ft_check_line_lens(char *str)
{
	int i;
	int w;
	int charcount;

	w = ft_count_inline(str);
	if (w == -1)
		return (0);
	i = w + 1;
	charcount = 0;
	while (str[i] != '\0')
	{
		charcount = 0;
		while (str[i] != '\n')
		{
			if (str[i] == '\0' && charcount > 0)
				return (0);
			else if (str[i] == '\0' && charcount == 0)
				return (1);
			charcount++;
			i++;
		}
		if (charcount != w)
			return (0);
		i++;
	}
	return (1);
}

t_rect	*ft_getrect(char *str)
{
	t_rect	*rect;
	int i;
	int linecount;
	int charcount;

	rect = ft_new_rect();
	i = 0;
	if (ft_check_line_lens)
	{
		rect->h = ft_count_lines(str);
		rect->w = ft_count_inline(str);
	}
	rect->top = *ft_get_line(str);
	while (i < ft_strlen(str))
	{
		charcount = 0;
		while (str[i] != '\n')
		{
			charcount++;
			i++;
		}
		linecount++;
		i++;
	}
}

int		main(int argc, char **argv)
{

}
*/
