#include<stdio.h>
int main(){
    int s, t = 0, temp; //s=sayı, t=ters
    printf("s gir");
    scanf("%d",&s);

    temp = s;
    
    while(temp != 0){
        t = t * 10; 
        t = t + temp%10;
        temp = temp/10;
    }
    printf("%d", t);
}