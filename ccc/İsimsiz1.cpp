#include<stdio.h>
/*
klavyeden girilen 5 sayının ortalaması
	int main(){
	
	
	int s, top = 0, i = 1, ort;
	
	while(i<=5){
		printf("sayı gir:");
		scanf("%d",&s);
		//printf("%d",s);
		top += s;
		//top = top +s;
		i++;
		
	}
	
	printf("%f",(float)top/5);
	//ort = top/5;
	//printf("%d",ort);
}*/

/*int main(){
	int s, top=0, i=0;
	
	while(s!=-1){
		printf("sayı gir:");
		scanf("%d",&s);
		if(s==-1){
			break;
		}
		//printf("%d",s);
		top += s;
		//top = top +s;
		i++;
	}
printf("%f",(float)top/i);
}*/
/*
int main(){
	int i = 0;
	while(i<10){
		if(i==5)                          //noktalı virgülllü if süslü parantezli if ile aynı. sınavda gelebilirmiş. tek satır yazılacaksa böyle süslü parantezsiz yazılabilir ama bir çok satır varsa süslü paranteze alınır. noktalı virgül yazdı çalışmadı btw.
			break;						//break döngüyü bırakıp printi yazdırır. continue ise döngünün başına gider.
		printf("%d",i);
		i++;
		
	}
}*/


//faktöriyel hesapla

/*int main(){
	int s;
	int fak;
	printf("s gir");
	scanf("%d",&s);
	for(int i = 1; i<=s; i++){
		fak *= i;
	}
	printf("%d",fak);
}*/


//ascii tablosu

/*int main(){

	for(int i = 0; i<=255; i++){
		printf("%d",i);
	}
}*/

//çift sayı girilene kadar devam

int main(){
	int s=1, top=0;
	
	
	while(s%2!=0){
		printf("sayı gir");
		scanf("%d",&s);
		if(s%2??0){
		break;
		}
		top += s;
	}
	printf("%d",top);
}

