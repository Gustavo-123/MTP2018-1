//Aluno: Gustavo Castro Souza
//Matricula: 11811EEL037

#include<stdio.h>

int soma(int *ref, int *px) {
	return (*px) + ((px == ref) ? 0 : soma(ref, px-1));
}

int main(){
	
	int quant, i, num[20] = {};
	
	scanf("%i", &quant);
	getchar();
	
	for(i=0; i<quant; i++){
		scanf("%i", &num[i]);
		getchar();
	}
	
	int *pprimeiro = num, *pultimo = num+quant-1;
	
	printf("media = %f\n", (float) soma(pprimeiro, pultimo)/quant);
	
	return 0;
}
