#include<iostream>

using namespace std;

int main(){
	
	int *p;
	
	int vetor[10];
	
	
	p = &vetor[0];
	cout << "\n" << p;
	
	*(p+=1);
     
    *p = 150;
    
	cout << "\n\n" << vetor[1];
	
	
	return 0;
}
