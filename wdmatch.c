#include <unistd.h>
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}

	return(i);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	int i;
	int j;
	int word;

	i = 0;
	j = 0;
	word = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					word++;
					break;
				}
				j++;
			}
			i++;
		}
		if (ft_strlen(av[1]) == word)
		{
			ft_putstr(av[1]);
		}
	}

	write(1, "\n", 1);
	return(0);
}
