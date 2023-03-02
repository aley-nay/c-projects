#include <stdio.h>
#include <locale.h>

int terso(int s){
    int t=0;
    
    while(s>0){
        t = t * 10; 
        t = t + s%10;
        s = s/10;
    }
    return t;
}

int main(){
    int s;
    printf("s gir");
    scanf("%d",&s);

    printf("%d",terso(s));

    return 0;
}