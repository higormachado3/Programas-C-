#include<iostream>
#include<string>
using namespace std;


void materiais(){
	
	int matriz[3][5];
	
	string l1 = ("Moderno");
	string l2 = ("Mediteraneo");
	string l3 = ("Colonial");
	string linha;
    	
    for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
    	
    if(i==0){
    linha = l1;
	}else if(i==1){
	linha = l2;
	}else if(i==2){
	linha == l3;
	}
	
	printf("\n Digite a quantidade de ferro nescessaria para o estilo %s de construcao:\t ", linha);
	scanf("%d",matriz[i][j]);
	
	
	
	
	}
	}
	
}

int main(){
		
 materiais();
	
	
	
	return 0;
}
