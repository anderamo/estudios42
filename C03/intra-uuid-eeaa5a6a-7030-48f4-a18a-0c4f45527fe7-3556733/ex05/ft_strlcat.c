unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	j;

	i = 0;
	c = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (size <= j)
		return (size + i);
	while (src[c] != '\0' && j + 1 < size)
	{
		dest[j] = src[c];
		j++;
		c++;
	}
	dest[c] = '\0';
	return (j + c);
}
