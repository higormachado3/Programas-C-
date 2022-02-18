#include<iostream>
#include<list>

#define MAX 15

using namespace std;

int main(){
	
    list <int> num, teste;
	
	list <int> :: iterator it;
	
	
	teste.push_front(51);
	teste.push_front(52);
	teste.push_front(53);
	teste.push_front(54);
	
	
	for(int i=0; i<MAX; i++){
		
		num.push_front(i);
		
	} 
	
	
	it = num.begin();
	
	advance(it, 9);
	
	num.insert(it, 58);
	
//	num.erase(--it);
	
	num.merge(teste);

	for(int i=0; i<MAX; i++){
		
		cout << " Num: "<< num.front() << "\n";
		num.pop_front();
	}
	
	
	
	
	return 0;
}
