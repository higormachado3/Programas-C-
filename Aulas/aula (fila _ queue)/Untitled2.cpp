#include<iostream>
#include<queue>

using namespace std;

int main(){
	
	queue <string> lanes;
	
	lanes.push("top");
	lanes.push("jg");
	lanes.push("mid");
	lanes.push("adc");
	lanes.push("sup");
	
	
	cout << "\n Quantidade de lenes: " << lanes.size() << "\n";
	
	cout << "\n Primeira lene: " << lanes.front() << "\n";
	
	cout << "\n Ultima lene: " << lanes.back() << "\n\n\n";
	
	while(!lanes.empty()){
		cout << "lene: " << lanes.front() << "\n\n";
		lanes.pop();
	}
	
	
	return 0;
}
