int main(){
	int s, top=0, i=0, temp;
	
	while(s!=-1){
		printf("sayı gir:");
		scanf("%d",&s);
		if(s==-1){
			break;
		}

		temp = s;
		i++;
	}
    if(temp>s){
			printf("%d buyuk",temp);
            printf("%d kucuk",s);
		}else{
			printf("%d buyuk",s);
            printf("%d kucuk",temp);
		}
}