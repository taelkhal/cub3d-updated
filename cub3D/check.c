// #include "cub3d.h"
// #include <fcntl.h>

// char	*check_texture_existence(char *path)
// {
// 	int	fd;

// 	fd = open(path, O_RDONLY);
// 	if (fd <= 0)
// 		ft_putstr_fd(RED"ERROR: WRONG FILE TEXTURE\n", 2);
// 	close(fd);
// 	return(path);
// }

// char	*ft_substr(char *s, unsigned int start, size_t len)
// {
// 	size_t	l;
// 	char	*p;
// 	size_t	i;

// 	i = 0;
// 	l = strlen(s);
// 	if (len > l)
// 		len = l;
// 	if (start > l)
// 		return (strdup(""));
// 	p = malloc(len + 1);
// 	if (p == NULL)
// 		return (NULL);
// 	while (s[start] && i < len)
// 	{
// 		p[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }

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
// void	set_value_in(char *value, char c)
// {
// 	t_parse *parse;
// 	if((c == 'N' && parse->NO_tex) || (c == 'W' && parse->WE_tex) 
// 	|| (c == 'S' && parse->SO_tex) || (c == 'E' && parse->EA_tex) 
// 	|| (c == 'F' && parse->F_value) || (c == 'C' && parse->C_value))
// 	{
// 		ft_putstr_fd(RED"ERROR: DUplicate\n", 2);
// 		exit(0);
// 	}
// 	if(c == 'N')
// 		parse->NO_tex = check_texture_existence(value);
// 	else if(c == 'W')
// 		parse->WE_tex = check_texture_existence(value);
// 	else if(c == 'S')
// 		parse->SO_tex = check_texture_existence(value);
// 	else if(c == 'E')
// 		parse->EA_tex = check_texture_existence(value);
// 	else if(c == 'F')
// 		parse->F_value = value;
// 	else if(c == 'C')
// 		parse->C_value = value;
// }

// char	*get_value(char *line,char c)
// {
// 	char *value;
// 	int i = 0;
// 	int j = 0;
// 	int f = 0;
// 	while(line[i] && line[i] == ' ')
// 			i++;
// 	j = i;
// 	while(line[j])
// 		j++;
// 	while(j > 0 && line[j - 1] == ' ')
// 	{
// 		f++;
// 		j--;
// 	}
// 	j = j - f + 1;
// 	value = ft_substr(line, i, j);
// 	printf("%s", value);
// 	set_value_in(value, c);
// 	return(value);
// }

// int	check_lines(char *line)
// {
// 	unsigned int i = 0;
// 	int j;
// 	while(line[i])
// 	{
// 		// printf("gg");
// 		while(line[i] == ' ' && line[i])
// 			i++;
// 		j = i + 1;
// 		while(line[j] && line[j] != ' ')
// 			j++;
// 		if(j - i == 2 && !strncmp(line + i, "NO", 2))
// 		{
// 			ft_putstr_fd(GREEN"NO valid\n", 2);
// 			get_value(line + j, 'N');
// 			return(0);
// 		}
// 		else if(j - i == 2 && !strncmp(line + i, "SO", 2))
// 		{
// 			ft_putstr_fd(GREEN"SO valid\n", 2);
// 			get_value(line + j, 'S');
			
// 			return(0);
// 		}
// 		else if(j - i == 2 && !strncmp(line + i, "WE", 2))
// 		{
// 			ft_putstr_fd(GREEN"WE valid\n", 2);
// 			get_value(line + j, 'W')
// 			return(0);
// 		}
// 		else if(j - i == 2 && !strncmp(line + i, "EA", 2))
// 		{
// 			ft_putstr_fd(GREEN"EA valid\n", 2);
// 			get_value(line + j, 'E')
// 			return(0);
// 		}
// 		else if((line[i] == 'F' || line[i] == 'C') && line[i + 1] == ' ')
// 		{
// 			ft_putstr_fd(GREEN"F C valid \n", 2);
// 			get_value(line + j, line[i]);
// 			return(0);
// 		}
// 		else
// 			return(1);
// 		// i = j;
// 	}
// 	return(1);
// }

