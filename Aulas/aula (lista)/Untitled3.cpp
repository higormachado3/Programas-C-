#include<iostream>
#include<list>
#define MAX 10

using namespace std;

int main(){
	
	list <int> num;
	
	list <int> :: iterator it;
	
	for(int i=0; i<MAX; i++){
		
		num.push_front(i);
		
	}
	
	it = num.begin();
	
	advance(it,9);
	
	num.insert(it,10);
	
	
	
	cout << " Tamanho da lista :" << num.size() << "\n\n";
	
	num.sort();
	num.reverse();
	
	for(int i=0; i<MAX; i++){
		
	cout << "\tNum: " << num.front() << "\n";
	num.pop_front();
		
	}
	
	
	
	
	return 0;
}
