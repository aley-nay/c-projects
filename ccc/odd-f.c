#include <stdio.h>
#include <stdlib.h>

int tek(int *ptr, int n){
    static int basamak=0;
    
    if(n==0){
        return basamak;
    }else{
        if(ptr[n-1]%2==1)
            basamak++;
        
    }
    tek(ptr,n-1);

    int main(){
        int n;
        printf("n gr");
        scanf("%d",&n);
        int dizi[n];
        int i;
        for(i=0;i<n;i++){
            printf("%d",i+1);
            scanf("%d",&dizi[i]);
        }

        int sonuc = terso(dizi,n);
        return 0;
    }
}