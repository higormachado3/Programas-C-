#include<iostream>

using namespace std;

void somar(int *p, int somar);

void vet(int *v);

int main(){
	
 int x = 0;
 int vetor[5];
 
 somar(&x,15);	
 
 cout << x << "\n\n";
 
 
 vet(vetor);
 
 for (int i; i<5; i++){
 	
 cout << vetor[i] << "\n";

 }	
	
 return 0;
}

void somar(int *p, int soma){
	
	*p += soma;
	
}


void vet(int *v){
	
  v[0] = 0;
  v[1] = 0;
  v[2] = 0;
  v[3] = 0;
  v[4] = 0;
  
}
