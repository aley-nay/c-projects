#include <stdio.h>
int main(){
	/*matris 1*/
	int matris1[3][2] = {{1,2},{3,4},{5,6}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ",matris1[i][j]);
		}
		printf("\n");
		
	}

	/*matris 2*/
	int matris2[3][2] = {{7,8},{9,10},{11,12}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}

	/*toplam*/
	int toplam[3][2];
	for(int i  = 0 ; i < 3; i++)
        {
			for (int j = 0; j < 2; j++)
			{
			toplam[i][j] = matris1[i][j] + matris2[i][j];
			printf("toplam : %d\n", toplam[i][j]);
			}
		printf("\n");
        }
}
