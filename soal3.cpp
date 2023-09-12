#include <iostream>
using namespace std;

int main(){
	int i, n, sum;
	double rerata;
	sum = 0;
	cout << "Masukkan nilai N = ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	rerata = static_cast<double>(sum) / n;
	cout << "Hasil = " << sum << endl;
	cout << "Nilai rata-rata = " << rerata << endl;
}