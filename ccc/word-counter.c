#include <stdio.h>
int main(){
    cumlear cumle[100];
    printf("bir cumle giriniz:");
    gets(cumle);
    printf("%s",cumle);//cümleyi yazdır

    int i=0;
 
    while(cumle[i]!='\0'){    
	    i++;
    }
    
printf("%d adet kelime var",i);
}