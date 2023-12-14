#include <unistd.h>

// 0=48 49 50 51 52 53 54 55 56 57=9
void ft_putnbr(int nb)
{
    int num[10] = {};
    int i = 0;
    while (i<nb)
    {
        i++;
        while (i<=9)
        {
            
            write(1,num[10],1);
        }
        
           
        
    }
    
    

}

int main(void)
{
    ft_putnbr(0);
}


