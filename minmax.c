#include <stdio.h>

int main(){
    int s[10], i, max, min;

    for(i=0;i<4;i++){
        printf("%d sayı gir",i+1);
        scanf("%d",&s[i]);
    }
    max=min=s[0];
    for(i=0;i<=4;i++){
        if(s[i]<min){
            min=s[i];
        }
        if(s[i]>max){
            max=s[i];
        }
    }
    printf("%d en büyük",max);
    printf("%d en küçük",min);

}