#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *stringa){
    int lunghezza;
    int i = 0;
    while (stringa[i] != '\0' ){
        i++;
        lunghezza = i;       
    }       
    return lunghezza;
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    int len;
    i = 0; 
    j = 0;
    len = ft_strlen(dest);

    while (src[i] !='\0')
    {
        dest[len+i] = src[i];
        i++;
    }
    return dest;
}

int main(void)  //contollare manuale e casi particolari
{
char destination[] = "cIao2"; 
char source[] = "cIao1";

printf("%s ", ft_strcat(destination,source)); 
return 0;    
}