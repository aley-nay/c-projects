#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i;
    int buyuk=0,kucuk=0;
    char cumle[100];

    printf("Enter the String:\n");
    gets(cumle);

    i=0;
    while(cumle[i]!=0){

    if(cumle[i]>='A' && cumle[i]<='Z'){
        buyuk++;
    }
    else if(cumle[i]>='a' && cumle[i]<='z'){
        kucuk++;
    }
    i++;
    }
printf("%d adet küçük",kucuk);
printf("\n %d adet büyük",buyuk);
getch();
}