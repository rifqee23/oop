#include <iostream>
using namespace std;

void transpose(int arr[][5], int trans[][5], int m, int n){
	if(m < 1 || n < 1 || m > 5 || n > 5 ){
		cout<<"Gagal Transpose";
		exit(0);
	}else{
		for(int i = 0; i<m; i++){
        	for(int j = 0; j<n; j++){
            	trans[j][i] = arr[i][j];
        	}
    	}
    
	    for(int i = 0; i<n; i++){
	        for(int j = 0; j<m; j++){
	            cout << trans[i][j] << " ";
	        }
	        cout << endl;
	    }	
	}
}
int main(){
	
	int arr[5][5], trans[5][5];
int m, n;
cin >> m >> n;

for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
        cin >> arr[i][j];
    }
}
transpose(arr, trans, m, n);
}
