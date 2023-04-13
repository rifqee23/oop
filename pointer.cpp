#include <iostream>
using namespace std;

void printsum(int *a, int *b){
	cout << *a + *b;
	
}

void kata(string *huruf){
	cout << *huruf;
}
void print(void* ptr, char type){
//	switch(type){
//		case 'i':cout << *((int*)ptr) << endl; break;
//		case 'c':cout << *((char*)ptr) << endl; break; 
//	}
	if(type == 'i'){
		int *intptr = static_cast<int*>(ptr);
		cout << *intptr << endl;
	
	}
	else if(type == 'c'){
		char *charptr = static_cast<char*>(ptr);
		cout << *((char*)ptr) << endl; 
	}
}
int main(){
	int number = 5;
	char letter = 'a';
	print(&number, 'i');
	print(&letter, 'c');
}
