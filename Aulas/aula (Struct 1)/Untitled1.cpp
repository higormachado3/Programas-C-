#include<iostream>

using namespace std;

struct Carro{
	
	string nome;
	
	string cor;
	
	int potencia;
	
	int velmax;
	
};

int main(){
	
	Carro c1, c2;
	
	c1.nome = "Mustang";
	c1.cor = "Vermelho";
	c1.potencia = 500;
	c1.velmax = 350;
	
	c2.nome = "Lancer";
	c2.cor = "Branco";
	c2.potencia = 300;
	c2.velmax = 260;
	
	
	cout << "\n\tCarro \n" << "\n\tNome: "<< c2.nome << "\n\tCor: "<< c2.cor <<
	"\n\tPotencia: "<< c2.potencia <<"\n\tVelociadade Maxima: "<< c2.velmax; 
	
	
	
	return 0;
}
