#include<iostream>
using namespace std;

int main(){
    cout << "Program menjumlahkan perulangan dari input user" << endl;
    cout << "Oleh Azmi Akhmad Dawami" << endl;

	int i, n, sum;
	sum = 0;
	cout << "Masukkan nilai N = ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	cout << "Hasil = " << sum << endl; 
}
