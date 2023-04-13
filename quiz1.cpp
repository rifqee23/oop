#include <iostream>

using namespace std;



int kali(int n, int x){
	 if(x == 0){
	 	return 1;
	 }
	 else{
	 	int digit = n% 10;
	 	return digit * kali(n, x-1);
	 }
}

int main(){
	int npm;
	cin >> npm;
	
	int digit9 = (npm / 10000000) % 10;
	
	int result = kali((npm / 10) % 10, digit9);
	
	cout << "Hasil perkaliannya sebanyak" << digit9 << "adalah" << result << endl;
return 0;
}


