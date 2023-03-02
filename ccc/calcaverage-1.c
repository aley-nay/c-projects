int main(){
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
}