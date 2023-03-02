#include <stdio.h>
int main(){
    int x;
    printf("bir tuşa bas");
    scanf("%d", &x);
    
    switch(x){
        case 1:
            printf("play gaming...");
            break;
        case 2:
            printf("load gaming...");
            break;
        case 3:
            printf("play multiplayer...");
            break;
        case 4: 
            break;

    }
}