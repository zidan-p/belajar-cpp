#include <iostream>

using namespace std;

// ------ reference -------
//digunakan supaya 2 buah variabel / + memiliki alamat memory yg sama
//sehingga setiap perubahan satu variabel, variabel lainya ikut berubah

//mungkin digunakan untuk mengecek perubahan suatu variabel


int main(int argc, char const *argv[])
{
	cout << "======= contoh reference ========== \n";

	//inisialisasi varibel yg akan di reference
	int a = 10;
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";

	//melakukan reference
	int &b = a; //alamat dari variabel b diisi dengan nilai a 
	//(saya tidak tahu mengapa malah valuenya yg diisi)
	//tapi intinya cpp seperti itu
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";

	//pembuktian perubaha
	b = 5;
	cout << "============ nilai b diubah ==========\n";
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";
	
	a = 15;
	cout << "============ nilai a diubah ==========\n";
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";
	cout << "alamat dari a :" << &a << "\n";
	cout << "nilai dari a :" << a << "\n";

	return 0;
}







