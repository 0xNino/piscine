#include "parsing.h"
#include "utils2.h"
#include "utils.h"

int	create_list(char list[41][39]);

int	check_dict(char **ref)
{
	int		i;
	int		j;
	char	list[41][39];

	i = 0;
	i = 0;
	if (create_list(list) == 0)
		return (0);
	while (i < 100)
	{
		j = 0;
		while (!(ft_strcmp(ref[i], list[j])) && list[j][0] != 'e')
		{
			++j;
			continue ;
		}
		if (list[j][0] == 'e')
		{
			write(1, "DictError\n", 6);
			return (0);
		}
		ft_strcpy(list[j], "\0\0\0");
		i += 2;
	}
	return (1);
}

int	create_list(char list[41][39])
{
	int		i;
	int		j;
	int		fd;
	char	*str;
	char	*address;

	i = 0;
	str = malloc(sizeof(char) * 1000);
	address = str;
	if (str == 0)
		return (0);
	fd = open("list.txt", O_RDONLY);
	if (fd == -1)
	{
		write (1, "Dict Error\n", 11);
		close(fd);
		free (str);
		return (0);
	}
	read(fd, str, sizeof(char) * 1000);
	while (*str != 'e')
	{
		j = 0;
		while (*str != '\n' && *str != 'e')
		{
			list[i][j] = *str;
			++j;
			++str;
		}
		list[i][j + 1] = '\0';
		if (*str != 'e')
			++str;
		++i;
	}
	list[i - 1][j] = '\0';
	ft_strcpy(list[i], "e");
	free(address);
	close(fd);
	return (1);
}
