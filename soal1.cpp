#include <iostream>
using namespace std;

int main(){
    cout << "Program kelipatan 5 dari 150 sampai 200" << endl;
    cout << "Oleh Azmmi Akhmad Dawami" << endl;
    
	int a;
	for(a = 150; a <= 200; a++){
		if(a % 5 == 0){
			cout << a << endl;
		}
	}
}
