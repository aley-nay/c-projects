#include<stdio.h>
int main(){
    
    int x;
    printf("hesaplama seç: 1-alan, 2-çevre");
    scanf("%d", &x);

    int a;
    printf("uzunluk gir:");
    scanf("%d",&a);

    int s;

    if(x == 1){
        s = a*a;
        printf("%d",s);
    }else if (x == 2)
    {
        s = 4*a;
        printf("%d",s);
    }else{
        printf("hata");
    }






    /*switch (x)
    {
    case 1:
        printf("1 seçtin");
        break;
    case 2:
        printf("2 seçtin");
        break;
    default:
        break;
    }
    return 0;*/
}