//Aluno: Gustavo Castro Souza
//Matricula: 11811EEL037
#include<stdio.h>

int main(){

	char str[256], *p, aux;
	int num[64], *pi, op, i;
	
	for(i=0; i<256; i++)
		str[i]='\0';
	
	printf("Escolha uma opcao:\n1 - Codificar\n2 - Descodificar\n");
	scanf("%d", &op); getchar();
	
	if(op==1){
		for(i=0; i<255; i++)
		{
			str[i] = getchar(); 
			if(str[i]==10)
			{
				str[i]='\0';
				break;		
			}
		}
				
		for(i=0; str[i]!='\0'; i=i+4)
		{
			pi = (int *) &str[i];
			if(str[i+4]!='\0')
				printf("%d, ", *pi);
			else
				printf("%d ", *pi);		
		}
	}
	else if(op==2)
	{	
						
		for(i=0; i<64; i++)
		{
			scanf("%d", &num[i]); 
			if(num[i]==0)
				break;
			p = (char *) num;
		}
		
		printf("%s\n", p);
	}
		
	return 0;
}
