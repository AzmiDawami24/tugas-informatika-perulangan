#include <iostream>
using namespace std;

int main(){
	cout << "Program membuat segitiga piramid dari input user" << endl;
	cout << "Oleh Azmi Akhmad Dawami" << endl;
	
	int lebar, tinggi, n;
	cout << "Masukkan tinggi segitiga = ";
	cin >> n;
	for(lebar = 1 ; lebar <= n; lebar++){
		for(tinggi = 1; tinggi <= lebar; tinggi++)
	cout << "*";
	cout << endl;
	}
}
