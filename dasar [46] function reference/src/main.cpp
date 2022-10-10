#include <iostream>

using namespace std;

// function reference
/*
	function reference fungsinya mirip dengan function dengan pointer,
	hanya saja pada function ini parameternya menggunakan reference
	sehingga untuk mnegakses nilai daata dan alamat memorynya
	tidak terlalu membingungkan seperti pointer.

	untuk lebih jelas lihat program dibawah
*/

//prototype untuk reference
void kuadrat(int &);

void functionRef(int &b){ //yg diambil adalah alamatnya, bukan menjadikan pointer
	cout << "alamat dari b = " << &b << endl;
	cout << "nilai dari b  = " << b << endl;
}




int main(){
	int a = 12;

	cout << "alamat dari a = " << &a << endl;
	cout << "nilai dari a  = " << a << endl;
	functionRef(a);
	kuadrat(a);
	cout << "hasil dari kuadrat a == " << a <<endl;

	return 0;
}

//contoh kuadrat untuk reference
void kuadrat(int &b){
	b = b * b;
}
