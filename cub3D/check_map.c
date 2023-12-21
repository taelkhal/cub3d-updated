/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:32:48 by amakhrou          #+#    #+#             */
/*   Updated: 2023/12/21 00:22:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../raycasting/cub3D.h"

int	check_first_and_last(char **map)
{
	int y;

	y = 0;
	while(map[0][y])
	{
		if(map[0][y] == '0' || map[0][y] == 'N' || map[0][y] == 'S'  || map[0][y] == 'W'  || map[0][y] == 'E')
			return(1);
        y++;
	}
	y = 0;
    while(map[tol(map) - 1][y])
    {
        if(map[tol(map) - 1][y] == '0' || map[tol(map) - 1][y] == 'N' || map[tol(map) - 1][y] == 'S' 
			|| map[tol(map) - 1][y] == 'E' || map[tol(map) - 1][y] == 'W')
			return(1);
        y++;
    }
	return(0);
}

int check_middle(char **map, t_parse *parse)
{
	int x;
    int y;

	x = 0;
	while(x < (tol(map) - 1))
    {
        y = 0;
        while(map[x][y])
        {
			if(map[x][0] == '0' || map[x][0] == 'N' || map[x][0] == 'S' || map[x][0] == 'W' 
				|| map[x][0] == 'E' || map[x][strlen(map[x]) - 1] == '0' 
            	|| map[x][strlen(map[x]) - 1] == 'N' || map[x][strlen(map[x]) - 1] == 'S' 
				|| map[x][strlen(map[x]) - 1] == 'W' || map[x][strlen(map[x]) - 1] == 'E')
				return(1);
            if((map[x][y] == '0' || map[x][y] == 'N' || map[x][y] == 'W' || map[x][y] == 'S' || map[x][y] == 'E') 
            	&& ((strlen(map[x - 1]) - 1) < y || (strlen(map[x + 1]) - 1) < y || map[x - 1][y] == ' '
				|| map[x + 1][y] == ' ' || map[x][y + 1] == ' ' || map[x][y - 1] == ' ' || !map[x][y + 1]))
                return(1);
            y++;
        }
		if(ft_strlen(map[x]) > parse->line_size)
				parse->line_size = ft_strlen(map[x]);
        x++;
    }
    return(0);
}

int map_check(char **map, t_parse *parse)
{
	if(!parse->F_value || !parse->C_value || !parse->EA_tex || !parse->NO_tex || !parse->WE_tex)
	{
		ft_putstr_fd(RED"ERROR: EMPTY VALUES\n", 2);
		exit(0);
	}
	if(check_first_and_last(map) || check_middle(map, parse))
	{
		ft_putstr_fd(RED"ERROR: In map\n", 2);
		exit(0);
	}
	check_p(map);
	check_x(map);
	rgb(parse, parse->C_value, 'C');
	rgb(parse, parse->F_value, 'F');
	return(0);
}
