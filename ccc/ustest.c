#include <stdio.h>
#include <math.h>

int UsHesapla(int Xtaban, int Xkuvvet){
    int Xsonuc = pow(Xtaban,Xkuvvet);
    return Xsonuc;
}

int main(){
    int taban, kuvvet, sonuc;
    
    printf("gir");
    scanf("%d",&taban);

    printf("gir");
    scanf("%d",&kuvvet);

    sonuc = UsHesapla(taban,kuvvet);
    printf("%d uzeri %d = %d",taban,kuvvet,sonuc);
    return 0;
}