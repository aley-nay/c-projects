#include <stdio.h>
int bin(int n)
{
     if (n == 1)
         return 1;
    else
     return (n%2+10*bin(n/2));
}
int main(){
     int sayi;  
    scanf("%d", &sayi);
    printf("bin kodu: %d", bin(sayi));
}

