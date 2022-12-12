#include<stdio.h>
int EnsKuvvetAlma(int taban, int us) {
    int sonucc;
    if (us == 0)
        sonucc = 1;
    else
        sonucc = taban * EnsKuvvetAlma(taban, us - 1);
    return sonucc;
}
int main(int argc, char *argv[]) {
 int e,n,s;
 printf("Hesapliyacaginiz Sayinin Taban Degerini Giriniz:");
 scanf("%d",&n);
 printf("%d Sayisinin Kacinci Kuvvetini Alacaksiniz:",n);
 scanf("%d",&e);
 s=EnsKuvvetAlma(n,e);
 printf("%d in//un %d. Kuvveti:%d",n,e,s);
 printf("\n\nwww.kodcubilgisayar.blogspot.com.tr");
 scanf("%d",s); //{0}BURAYA DİKKAT!!
 return 0;
}
