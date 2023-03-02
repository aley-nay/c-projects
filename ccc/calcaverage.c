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
}