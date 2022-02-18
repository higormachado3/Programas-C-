#include<iostream>
#include<locale.h>
#define MAX 1000
using namespace std;


typedef struct Redes{
	
	char facebook[100];
	char Instagram[100];
	char Linkedin[100];
	char Outros[100];
}Red_pess;

typedef struct Endereco{
	
	char rua[50];
	int numero;
	char bairro[35];
	char cidade[35];
	char cep[10];
}End_pess;

typedef struct Pessoa{
	
	char nome[35];
	End_pess End_pess;
	char telefone[15];
	Red_pess Red_pess; 
	
};

Pessoa Ler_pessoa(){
	
	Pessoa P;
	
	cout << "\n\n\n\t\t\t\tCadastro De Pessoas\n";
	
	cout << "\n\t\tNome: ";
	gets(P.nome);
	fflush(stdin);
	
	cout << "\n\t\tENDERECO\n";
	cout << "\n\t\t*Rua: ";
	gets(P.End_pess.rua);
    fflush(stdin);
    
	cout << "\n\t\t*Numero: ";
	cin >> P.End_pess.numero;
    fflush(stdin);
    
	cout << "\n\t\t*Bairro: ";
	gets(P.End_pess.bairro);

	cout << "\n\t\t*Cidade: ";
	gets(P.End_pess.cidade);
	fflush(stdin);
	
	cout << "\n\t\t*Cep: ";
	gets(P.End_pess.cep);
	fflush(stdin);
 
	cout << "\n\t\tTelefone: ";
	gets(P.telefone);
	fflush(stdin);
	
	cout << "\n\t\tREDES SOCIAIS\n";
	cout << "\n\t\tFacebook: ";
	gets(P.Red_pess.facebook);
	cout << "\n\t\tInstagram: ";
	gets(P.Red_pess.Instagram);
	cout << "\n\t\tLinkedin: ";
	gets(P.Red_pess.Linkedin);
	cout << "\n\t\tOutros: ";
	gets(P.Red_pess.Outros);
	
	return P;
	
};


void escrever(Pessoa P){
	
	cout << "\n\t\t\t\tULTIMA PESSOA CADASTRADA";
	
	cout << "\n\n\t\tNome: " << P.nome;
	
	cout << "\n\n\t\tEndereco";
	cout << "\n\n\t\t*Rua: " << P.End_pess.rua;
	cout << "\n\n\t\t*Numero: " << P.End_pess.numero;
	cout << "\n\n\t\t*Bairro: " << P.End_pess.bairro;
	cout << "\n\n\t\t*Cidade: " << P.End_pess.cidade;
	cout << "\n\n\t\t*Cep: " << P.End_pess.cep;
	
	
	cout << "\n\n\t\tTelefone: " << P.telefone;
	
	cout << "\n\n\t\tRedes Sociais";
	cout << "\n\n\t\t*Facebook: " << P.Red_pess.facebook;
	cout << "\n\n\t\t*Instagram: " << P.Red_pess.Instagram;
	cout << "\n\n\t\t*Linkedin: " << P.Red_pess.Linkedin;
	cout << "\n\n\t\t*Outros: " << P.Red_pess.Outros;
	cout << "\n\n\n";
}

int menu(){
	
	int i, op;
	
	printf("\n\n\n\t\t\t\t");
	for(int i; i<50; i++){
		
	printf("%c", 220);
	
	}
	
	printf("\n\t\t\t\t%c\t\t\t\t\t\t %c", 219,219);
	printf("\n\t\t\t\t%c\t\tSISTEMA DE CADASTRO\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t\t\t\t\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t1-Ler Nova Pessoa\t\t\t %c",219, 219);
    printf("\n\t\t\t\t%c\t\t\t\t\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t2-Escrever Ultima Pessoa Lida\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t\t\t\t\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t3-Sair\t\t\t\t\t %c",219,219);
    printf("\n\t\t\t\t%c\t\t\t\t\t\t %c",219,219);
	
   printf("\n\t\t\t\t%c",219);
  
   for(int i=0; i<48; i++)
   printf("%c",220);
   printf("%c",219);
   
   printf("\n\n\n\t\t\t\tDigite sua opcao: ");
   scanf("%d",&op);
   fflush(stdin);
   
   return op;
}

int main(){
	
	Pessoa P[MAX];
	int opcao=0;
	int cadastro=0;
	int i;
	
	do{
		opcao = menu();	
        system("CLS");
        
		switch(opcao){
			
			case 1:
				P[cadastro++] = Ler_pessoa(); 
			
				system("CLS");
				cout <<"\n\n";
			
				break;
				
			case 2:
		      
		        for(i=0; i<cadastro; i++){
		        	
		        escrever(P[i]);
					
				}

				system("pause");
				system("CLS");
				cout <<"\n\n";
				break;
				
			case 3:
				printf("\n\n\t\tFinalizando o programa\n\n");
				break;
				
			default:
				printf("\n\n\t\tOpcao invalida! Tente novamente.\n\n");
				system("pause");
				system("CLS");
		}       printf("\n\n");
	}while(opcao!=3);
	
	
	
}
