#include<iostream>
#include<stdlib.h>
#define MAX 2
#include<string>

using namespace std;

struct Rh{
	
	string name[30];
	
	string setor[30];
	
	int idade;
	
	double salario;
	
void insert(string INname, string INsetor, int INidade, double INsalario){
    
    name[30] = INname[30];
    
    setor[30] = INsetor[30];
    
    idade = INidade;
    
    salario = INsalario;
 
 }
	
void mostra(){
	
	cout << "\n--------------------------------------";
	cout << "\n Recursos Humanos";
	cout << "\n nome:......"<< name[30];
	cout << "\n setor:....."<< setor[30];
	cout << "\n idade:....."<< idade << " anos";
	cout << "\n salario:..."<< salario << " Reais";
	cout << "\n--------------------------------------";
	

}
 
 
 	
 	
 	
 


	
};



int main(){
	
	string na[30], se[30];
	int id, sl;
	
	
	Rh  *p = new Rh[MAX];
	
	Rh  p1[MAX];
	
	for(int i=0; i<MAX; i++){
	
	p[i] = p1[i];
}
 
	for(int i = 0; i<MAX; i++){
		
	cout << "\n--------------------------------------";
	cout << "\n Recursos Humanos";
	cout << "\n nome:\t";
	gets(na[30]);
	fflush(stdin);
	cout << "\n setor:\t";
	cin >> se[30];
	fflush(stdin);
	cout << "\n idade:\t";
	cin >> id;
	cout << "\n salario:\t";
	cin >> sl;
	cout << "\n--------------------------------------";
		
		p[i].insert(na[30], se[30], id, sl);
		
		system("cls");
	}
	
	for(int i=0; i<MAX; i++){
		
		p[i].mostra();
		
	}
	
	
	return 0;
}
