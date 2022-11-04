#include<stdio.h>
int main(){

    char gun[5];//karakter kontrol
    printf("Gun dilimi: ");
    scanf(" %s", &gun);

    int bt;//bilet türü
    printf("Bilet turunu seciniz 1-First Class, 2-Eco ");
    scanf("%d", &bt);

    int bu = 100;//bilet ücreti

    int top;

    int ks; //kişi sayısı
    printf("Kişi sayısı gir");
    scanf(" %d", &ks);
    

    ///////////sabah///////////
    if (strcmp(gun, "sabah") == 0)
    {
        printf("%s",gun);
        if(bt == 1){
            if (ks == 1)
            {
                top = bu+50;
                printf("tek kisilik fiyat : %d",top);
            }
            else if (ks>=2)
            {
                top = (bu+50)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-1");
            }
        }
        else if(bt == 2){
            if (ks == 1)
            {
                
                printf("tek kisilik fiyat : %d",bu);
            }
            else if (ks>=2)
            {
                top = (bu)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-2");
            }
        }
        else{
            printf("hata 2");
        }

    }else{
        printf("hata 1");
    }
    


    ///////////öğle///////////
    if (strcmp(gun, "ogle") == 0)
    {
        printf("%s",gun);
        if(bt == 1){
            if (ks == 1)
            {
                top = bu+40;
                printf("tek kisilik fiyat : %d",top);
            }
            else if (ks>=2)
            {
                top = (bu+40)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-1");
            }
        }
        else if(bt == 2){
            if (ks == 1)
            {
                top = bu-10;
                printf("tek kisilik fiyat : %d",top);
            }
            else if (ks>=2)
            {
                top = (bu-10)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-2");
            }
        }
        else{
            printf("hata 2");
        }

    }else{
        printf("hata 1");
    }


    ///////////akşam///////////
    if (strcmp(gun, "aksam") == 0)
    {
        printf("%s",gun);
        if(bt == 1){
            if (ks == 1)
            {
                top = bu+20;
                printf("tek kisilik fiyat : %d",top);
            }
            else if (ks>=2)
            {
                top = (bu+20)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-1");
            }
        }
        else if(bt == 2){
            if (ks == 1)
            {
                top = bu-30;
                printf("tek kisilik fiyat : %d",top);
            }
            else if (ks>=2)
            {
                top = (bu-30)*ks/100*85;
                printf("cok kisilik fiyat : %d",top);
            }
            else{
                printf("hata 2-2");
            }
        }
        else{
            printf("hata 2");
        }

    }else{
        printf("hata 1");
    }

    
}