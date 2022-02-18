#include<iostream>
#include<stack>
using namespace std;

int main(){
	
   stack <string> cartas;
   
   cartas.push("Rei De Copas");
   cartas.push("Rei De Paus");
   cartas.push("Rei De Ouros");
   cartas.push("Rei De Espada");
   
   printf("\n Quantidade de cartas: %d ", cartas.size());
   
   cout << "\n\n ultima carta adicionada: " << cartas.top() << "\n";
   
   cartas.pop();
   
   cout << "\n ultima carta atualizada: " << cartas.top() << "\n";
	
	
	
	return 0;
}
