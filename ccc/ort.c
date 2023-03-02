#include <stdio.h>

int main(){
    int s[10];
    int i;
    int top=0;


    for(i=0;i<4;i++){
        printf("%d sayı gir");
        scanf("%d",&s[i]);
        top += s[i];
        
    }
    
   
   
   printf("%f",(float)top/i);

   

}