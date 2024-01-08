
int ft_isupper(unsigned char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}


int ft_tolower(int c)
{
	if (ft_islower(c))
		return (c + 32);
	else
		return (c); 
}
