#include <stdio.h>

int fmax(int s1, int s2);
int fmin(int s1, int s2);

int main(){
    int s1, s2, max, min;
    printf("2 sayi gir");
    scanf("%d %d",&s1,&s2);

    max = fmax(s1,s2);
    min = fmin(s1,s2);

    printf("max %d",max);
    printf("min %d",min);
}
