#include<stdio.h>
int main(){
    
    int matris1[3][2] = {1,2,3,4,5,6 };
    int matris2[3][2]={7,8,9,10,11,12};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;i++){
            matris1[i][j]=i*j;
			printf("%d\t",matris1 [i][j]);

        }
        printf("\n");

    }
    

    return 0;
}