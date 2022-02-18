#include<iostream>

using namespace std;

struct Rh{
	
	string name;
	
	string setor;
	
	int idade;
	
	double salario;
	
void insert(string INname, string INsetor, int INidade, double INsalario){
    
    name = INname;
    
    setor = INsetor;
    
    idade = INidade;
    
    salario = INsalario;
 
 }
	
void mostra(){
	
	cout << "\n--------------------------------------";
	cout << "\n Recursos Humanos";
	cout << "\n nome:......"<< name;
	cout << "\n setor:....."<< setor;
	cout << "\n idade:....."<< idade << " anos";
	cout << "\n salario:..."<< salario << " Reais";
	cout << "\n--------------------------------------";
	
}



	
};



int main(){
	
	Rh  p1,p2;
	p1.insert("Higor", "Programador", 19, 2500);
	p1.mostra();
	
	p2.insert("Victor", "Calderaria", 20, 3000);
	p2.mostra();
	
	
	return 0;
}
