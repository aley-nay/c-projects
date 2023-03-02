#include <stdio.h>
int main(){
    int s;
    printf("sayı gir");
    scanf("%d", &s);

    int i, bol, bolen=0;
    for(i=1; i<s; i++){
        bol = s%i;
        if(bol == 0){
            bolen += i;
        }
    }
    if (bolen==s)
    {
        printf("müq");
    }else{
        printf("no");
    }
    
}