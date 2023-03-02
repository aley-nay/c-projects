#include<stdio.h>
int main(){

    char gun[5];//karakter kontrol
    printf("Gun dilimi: ");
    scanf("%s", gun);

    
    int bt;//bilet türü
    printf("Bilet turunu seciniz 1-First Class, 2-Eco ");
    scanf("%d", &bt);
    printf("%d\n", bt);

    
    int bu = 100;//bilet ücreti

    int top;

    int ks; //kişi sayısı
    


    if (strcmp(gun, "sabah") == 0 )
    {
       printf("Gun dilimi %smis ya pasham", gun);

       switch (bt)
       {
       case 1:
            printf("Kişi sayisi: ");
            scanf("%d", ks);
            //printf("%d\n", ks);


            switch (ks)
            {
            case 1:
                top = bu+50;
                printf("%d",top);
                break;
            
            case 2:
                top = bu*2;
                printf("%d",top);
                break;

            default:
                break;
            }













        break;
       case 2:
            top = bu+0;
            printf("%d",top);
        break;
       default: printf("hata");
        break;
       }
        
    }
    else if (strcmp(gun, "oglen") == 0)
    {
        printf("Gun dilimi %smıs ya pasham", gun);
        switch (bt)
       {
       case 1:
            top = bu+40;
            printf("%d",top);
        break;
       case 2:
            top = bu-10;
            printf("%d",top);
        break;
       default: printf("hata");
        break;
       }
    }
    else if (strcmp(gun, "aksam") == 0)
    {
        printf("Gun dilimi %smıs ya pasham", gun);
        switch (bt)
       {
       case 1:
            top = bu+20;
            printf("%d",top);
        break;
       case 2:
            top = bu-30;
            printf("%d",top);
        break;
       default: printf("hata");
        break;
       }
    }
    else{
        printf("gun yazmadin ki");
    }
    return 0;
    
}