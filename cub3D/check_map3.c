/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:01:53 by amakhrou          #+#    #+#             */
/*   Updated: 2023/12/21 00:04:44 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../raycasting/cub3D.h"

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	i;

// 	i = 0;
// 	if (!s)
// 		return ;
// 	while (s[i])
// 	{
// 		write(fd, &s[i], 1);
// 		i++;
// 	}
// }

// int	tol(char **map)
// {
// 	int	i;

// 	i = 0;
// 	while (map[i])
// 		i++;
// 	return (i);
// }

// char **third_check(char **map)
// {
//     int i = 0;
//     int j;
//     int t = 0;
//     int len = tol(map);
//     char **tmp;
//     tmp = malloc(sizeof(char *) * (len + 1));
//     while(i < len)
//     {
//         j = 0;
//         while(map[i][j] == ' ' || map[i][j] == '\t')
//             j++;
//         if(!strlen(map[i]))
//             i++;
//         if(map[i][j] != ' ' && map[i][j] != '\t' && map[i][j])
//         {
//             tmp[t] = map[i];
//             t++;
//         }
//         i++;
//     }
//     return(tmp);
// }

// int map_check(char **map)
// {
//     int x = 0;
//     int y = 0;
// 	while(map[0][y])
// 	{
// 		if(map[0][y] == '0' || map[0][y] == 'N' || map[0][y] == 'S'  || map[0][y] == 'W'  || map[0][y] == 'E')
// 		{
// 			ft_putstr_fd(RED"error map 3\n", 2);
// 			return(1);
// 		}
//         y++;
// 	}
// 	y = 0;
//     while(map[tol(map) - 1][y])
//     {
//         if(map[tol(map) - 1][y] == '0' || map[tol(map) - 1][y] == 'N' || map[tol(map) - 1][y] == 'S' || map[tol(map) - 1][y] == 'E' || map[tol(map) - 1][y] == 'W')
//         {
//             ft_putstr_fd(RED"error map 4\n", 2);
// 			return(1);
//         }
//         y++;
//     }
//     while(x < (tol(map) - 1))
//     {
//         y = 0;
//         while(map[x][y])
//         {
// 			if(map[x][0] == '0' || map[x][0] == 'N' || map[x][0] == 'S' || map[x][0] == 'W' || map[x][0] == 'E' || map[x][strlen(map[x]) - 1] == '0' 
//             || map[x][strlen(map[x]) - 1] == 'N' || map[x][strlen(map[x]) - 1] == 'S' || map[x][strlen(map[x]) - 1] == 'W' || map[x][strlen(map[x]) - 1] == 'E')
// 			{
// 				ft_putstr_fd(RED"error map 1\n", 2);
// 				return(1);
// 			}
//             if((map[x][y] == '0' || map[x][y] == 'N' || map[x][y] == 'W' || map[x][y] == 'S' || map[x][y] == 'E') 
//             && ((strlen(map[x - 1]) - 1) < y || (strlen(map[x + 1]) - 1) < y || map[x - 1][y] == ' '|| map[x + 1][y] == ' ' 
// 			|| map[x][y + 1] == ' ' || map[x][y - 1] == ' ' || !map[x][y + 1]))
//             {
//                 ft_putstr_fd(RED"error map 0\n", 2);
//                 return(1);
//             }
//             y++;
//         }
//         x++;
//     }
// 	ft_putstr_fd(YELLOW"valid\n", 2);
//     return(0);
// }

// int main() {
//     // Example array of strings
//     int i = 0;
//     char *map[] = {
//         "111 1111",  
//         "111 1111",
//         "11 1  11",
//         "1 1N1101",
//         "1111  111",
//         "11111111",
//         NULL
//     };
//     // int lent = tol(map);
//     // Test tol function
//     // printf("Number of strings in map: %d\n", tol(map));

//     // Test second_check function
//     // char **result;
//     // result = malloc(sizeof(char *) * (tol(map) + 1)); 
//     int re = map_check(map);

//     // if (result != NULL) {
//     //     while(result[i]) {
//     //         printf("%s\n", result[i]);
//     //         i++;
//     //     }
//     // } else {
//     //     printf("No '1' found in the map.\n");
//     // }

//     return 0;
// }