#include <stdlib.h>
#include <stdio.h>

int ft_magnitude(int number)
{
	int res = 0;

	while (number >= 1)
		{
			number = number / 10;
			res = res + 1;
		}
	return res;
}

int ft_iterative_power(int nb, int power)
{
    int result = 1;
    if (nb == 0 && power == 0) 
        return 0;
    while (power >=1){
        result = nb * result;
        power--;
    }
    return result;   
}    

char	*ft_itoa(int nbr)
{
	char	*result;
	int	magnitude;
	int i;
	int power;
	int sign;

	i = 0;
	sign = 0;
	power = 0;
	if (nbr == -2147483648)
		result = "-2147483648";
	else
	{
		if (nbr < 0)
		{
			nbr = - nbr;
			sign = 1;
			i = 1;
		}
		magnitude = ft_magnitude(nbr) - 1;			
		result = (char *)malloc((magnitude + 2 + sign) * sizeof(char));
		if (!result)
			return NULL;
		power = ft_iterative_power(10,magnitude);
		while (power >= 1)
		{	
			result[i] = (nbr / power) + 48;
			nbr = nbr % power;
			i++;
			power = power / 10;		
		}
		if (sign == 1)
			*result = '-';
		result[i] = '\0';
		}
	return (result);
}

int main(void)
{
	char *stringa;
	
	stringa = ft_itoa(-2147483648);
	printf("%s",stringa);
	free(stringa);
	return 0;
}