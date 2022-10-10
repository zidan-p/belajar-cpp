#include <iostream>

using namespace std;

//function dengan pointer
/*
	contoh penenrapan function yang parameternya menggunakan pointer.
	sehingga setiap argument yg dimasukan akan merujuk pada alamat data
	argument. sehingga dalam setiap pemanggilan function, alamat memory
	yang diproses akan sama dengan nilai argumentnya.
	digunakan supaya untuk memberikan manajemen memory yang lebih baik.


	caranya tinggal menjadikan parameter sebagai pointer, lalu untuk mengolah
	nilainya tingga melakukan dereferencing.
*/

// --- contoh prototype untuk pointer
void kuadrat(int *);


void functionPtr(int *b){
	cout << "alamat b : " << b << endl; //isinya adalah alamat
	cout << "nilai b : " << *b << endl; //isinya adalag nilai dari b
}

int main(){
	int a = 10;
	cout << "nilai dari a : " << a << endl;
	cout << "alamat dari a : " << &a << endl; //bila bukan pointer, maka cara memunculkan alamat seperti ini
	
	functionPtr(&a); //function dg pointer, supaya parameter dapat memenrima pointer, maka argument yg dimasukan harus berupa alamat
	
	//mengkuadratkan a
	kuadrat(&a);
	cout<< "hasil kuadrat untuk a " << endl;
	cout << a << endl;

	return 0;
}

void kuadrat(int *c){
	*c = (*c) * (*c); //kuadratkan c
}
