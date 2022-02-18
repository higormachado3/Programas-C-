#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	
	stack <int> num;
	
	if(num.empty()){
		
		cout << "\n Esta Vazio" << "\n";
		
	}else{
		
		cout << "\n Esta Preenchido";
	}
	
	num.push(1);
	num.push(4);
	num.push(100);
	num.push(0);  
	
	cout << "\n Quantidade: " << num.size()<< "\n";
	
	cout<< "\n  Num: " << num.top() << "\n";
	
	if(num.size() == 0){
		
		cout << "\n Esta vazio\n";
		
	}else{
		
		cout << "\n Esta Preenchido\n";
	}
	
	while (!num.empty()){
		num.pop();
	}
	
	
	if(num.empty()){
		
		cout << "\n Esta Vazio\n";
		
	}else{
		
		cout << "\n Esta Preenchido";
	}
	
	return 0;
	
}
