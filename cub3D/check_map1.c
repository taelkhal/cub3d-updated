/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:55:43 by amakhrou          #+#    #+#             */
/*   Updated: 2023/12/18 21:19:42 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "cub3d.h"


// int	tol(char **map)
// {
// 	int	i;

// 	i = 0;
// 	while (map[i])
// 		i++;
// 	return (i);
// }

// char **second_check(char **map)
// {
//     int t = 0;
//     char **tmp;
//     int i = 0;
//     tmp = malloc(sizeof(char *) * (tol(map) + 1));
//     int len = tol(map);
//     while(i < len)
//     {
//         int j = 0;
//         while(map[i][j] == ' ' || map[i][j] == '\t')
//             j++;
//         if(map[i][j] == '1')
//         {
//             while(i < len)
//             {
//                 tmp[t] = map[i];
//                 i++;
//                 t++;
//             }
//         }
//         i++;
//     }
//     return(tmp);
// }

// int main() {
//     // Example array of strings
//     int i = 0;
//     char *map[] = {
//         "NO ./path_to_the_north_texture",
//         "  111111",
//         " 0 0 0",
//         " 1 0 0",
//         " 0 0 0",
//         " 111111",
//         "WE ./path_to_the_west_texture",
//         NULL
//     };
//     int lent = tol(map);
//     // Test tol function
//     printf("Number of strings in map: %d\n", tol(map));

//     // Test second_check function
//     char **result;
//     result = malloc(sizeof(char *) * (tol(map) + 1)); 
//     result = second_check(map);

//     if (result != NULL) {
//         while(result[i]) {
//             printf("%s\n", result[i]);
//             i++;
//         }
//     } else {
//         printf("No '1' found in the map.\n");
//     }

//     return 0;
// }