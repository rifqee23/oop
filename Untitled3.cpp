#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
	if(a>b && a > c && a > d){
		return a;
	}
	else if(b>c && b > d){
		return b;
	}
	else if(c > d){
		return c;
	}
	else{
		return d;
	}
}

int main(){
	int x =10, y =9, z = 5, m =11;
	
	cout << max_of_four(x,y,z,m);
}
