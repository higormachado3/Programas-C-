#include<iostream>

using namespace std;

int fatorial(int n);

int main(){
	
	int res;
	
	res = fatorial(12);
	
	printf("\n Fatorial:\t%d", res);
	
}

int fatorial(int n){
	
	if(n == 0){
		return 1;
	}
	return n*fatorial(n-1);
}
	
		
	
	

