#include<iostream>
#include<stdlib.h>
#define MAX 1
using namespace std;

typedef struct ender{
	
	char rua[50];
	
	char bairro[50];
	
	char cidade[50];
	
	char cep[15];
	
	int num;
}endereco;

typedef struct Emprego{
	
	int temp_emp;
	
	char empresa[35];

	int salario;
	
	
}Trab;

typedef struct Pessoa{
	
  Trab Trab;
	
  endereco endereco;
  
  char nome[35];
 
  int idade;
 
 
};

Pessoa ler_pessoa(){
	
	Pessoa man;
	
	cout << "\nDigite o Nome da Pessoa: " ;
	gets(man.nome);
	
	cout << "\nIdade: ";
	cin >> man.idade;
	fflush(stdin);
	cout << "\nEndereco: ";
	cout<< "\nRua: ";
	gets(man.endereco.rua);
	cout << "\nBairro: ";
	gets(man.endereco.bairro);
	cout <<"\nCidade: ";
	gets(man.endereco.cidade);
	cout <<"\nCep: ";
	gets(man.endereco.cep);
	cout <<"\nNumero: ";
	cin >> man.endereco.num;
	
	
	cout << "\nTempo de empresa: ";
	cin >> man.Trab.temp_emp;
	
	cout << "\nSalario: ";
	cin >> man.Trab.salario;
	
	fflush(stdin);
	
	return man;
}

void escrever(Pessoa man){
	
	cout << "\n\n\n";
	
	cout <<"\n\t\tNome: " << man.nome;
	cout <<"\n\t\tIdade: "<< man.idade;
	
	cout <<"\n\t\tEndereco: ";
	cout <<"\n\t\tRua: " << man.endereco.rua;
	cout <<"\n\t\tBairro: " <<man.endereco.bairro;
	cout <<"\n\t\tNumero: "<<man.endereco.num;
	cout <<"\n\t\tCidade: "<<man.endereco.cidade;
	cout <<"\n\t\tCep: "<<man.endereco.cep;
	
	cout <<"\n\t\tTempo de empresa: "<<man.Trab.temp_emp;
	cout <<"\n\t\tSalario: "<<man.Trab.salario;
	
	
}




int main(){
	
	Pessoa man[MAX];
	
	
	for(int i=0; i<MAX; i++){
		
	man[i] = ler_pessoa();
	
	system("cls");
	
	}
	
	
	for(int i=0; i<MAX; i++){
		
	escrever(man[i]);
		
	}
	
	
	
	
	return 0;
}
