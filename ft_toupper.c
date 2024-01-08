
int ft_islower(unsigned char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


int ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	else
		return (c); 
}
