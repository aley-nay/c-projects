#include <stdio.h>
int main(){
    int sayi, deger=0, taban=1, kalan;
    printf("sayi gir");
    scanf("%d",&sayi);

    while(sayi>0){
        kalan = sayi %10; //basamak değeri
        deger = deger + kalan * taban;
        sayi = sayi / 10; //yukarda basamak değerini bulduk ya, o yüzden sayıyı küçültüyoruz ki tekrar %10-modunu alınca aynı sayıyı döndürmesin
        taban = taban * 2;
    }
    printf("%d", deger);
}