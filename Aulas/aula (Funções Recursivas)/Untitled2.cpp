#include<iostream>

using namespace std;

void contador(int num, int cont=0);

int main(){
	
	contador(5);
	
	return 0;
}

void contador(int num, int cont){
	
	printf("\n Numero -%d", num);
	if(num>cont){
		
		contador(num,++cont);
		
	}
}
