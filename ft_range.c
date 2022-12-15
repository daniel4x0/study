
int	*ft_range(int start, int end)
{
	int *tab;
	int *d;
	int size;
	int i;
	
	i = 0;
	size = end - start + 1;
	tab = malloc(sizeof(int) * size);
	d = tab;
	
	if (!d)
		return(0);

	if (start == end)
	{
		tab[0] = start;	
	}

	if (end > start)
	{
		while (i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}

	else if (end < start)
	{
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}

	return(tab);

}
