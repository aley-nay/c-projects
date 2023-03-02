#include<stdio.h>
int main(){
    int a=8, b=-3, c=2, d;
    d=a-1*b++/c+b;
    printf("%d\n",d);

    a%=c+1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",a||b && 10);
}