
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

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = ft_strlen(str) - 1;

	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}

	return(str);
}
