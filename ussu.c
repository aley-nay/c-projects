#include <stdio.h>
#include <math.h>

int ussu(int utaban, int uus){
    int uson = pow(utaban,uus);
    return uson;
}
int ussu(utaban,uus);
int main(){
    int taban, us, son;
    printf("taban gir");
    scanf("%d",&taban);
    printf("us gir");
    scanf("%d",&us);

    son  = ussu(taban,us);
    printf("%d uzeri %d = %d",taban,us,son);
    return 0;
}