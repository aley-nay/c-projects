#include <stdio.h>


/*int main(){
    int Matris1[]={1,2,3,4,5,6};
    //int Matris2[3][2]={7,8,9,10,11,12}
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;i++){
            printf("%d ", Matris1[i][j]);
        }
    }
}*/
int main(){
    int A[11][11];
    int i, j;

    for(i=0;i<11;i++){
        for(j=0;j<11;j++){
            A[i][j]=i*j;
            printf("%d",A[i][j]);
    }
    }
}