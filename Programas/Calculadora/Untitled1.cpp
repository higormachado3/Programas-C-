#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;

int soma(int a, int b){
	
	int res;
	
	res = a + b;
	
	return res;
	
}

int subtracao(int a, int b){
	
	int res;
	
	res = a - b;
	
	return res;
}

int divisao(int a, int b){
	
	int res;
	
	res = a / b;
	
	return res;
}

int multiplicacao(int a, int b){
	
	int res;
	
	res = a * b;
	
	return res;
}
  
int main(){
	
	int a, b, aux, i, aux1;
	
	char op;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("_____________________________________________\n\n");
	
	printf("\n CALCULADORA BASICA\n\n [1] Soma\n [2] Subtra��o\n [3] Divis�o\n [4] Multiplica��o\n\n Qual opera��o deseja realizar:\t");
	scanf("%d", &aux);
	
	printf("\n\n_____________________________________________\n\n");
	
	printf("\n Digite um numero:\t");
	scanf("%d", &a);
	
	printf("\n Digite um numero:\t");
	scanf("%d", &b);
	
	switch(aux){
		
	case 1:
        i = soma(a,b);
        break;
        
	case 2:
		i = subtracao(a,b);
		break;
		
	case 3:
		i = divisao(a,b);
		break;
		
	case 4:
		i = multiplicacao(a,b);
		break;
	
	default:
		printf("\n Opera��o n�o existente!!!\n\n Deseja continuar: \n [1] SIM\n [2] N�O\n\t");
		scanf("%d", &aux1);
		
		if(aux1 == 1){
			system("cls");
			return  main();
		}else{
		   return 0;
		}
		break;
	
	}
	
/*	if(aux == 1){
		op[10] = 'soma';
	}else if(aux ==2){
		op[10] = 'subtra��o';
	}else if(aux ==3){
		op[10] = 'divis�o';
	}else if(aux ==4){
		op[10] = 'multiplica��o';
	}*/
	
	printf("\n O resultado da opera��o e igual a %d", i);
	
		printf("\n\n Deseja continuar: \n [1] SIM\n [2] N�O\n\t");
		scanf("%d", &aux1);
		
		if(aux1 == 1){
			system("cls");
			return  main();
		}else{
		   return 0;
		}
	
	
	return 0;
}
