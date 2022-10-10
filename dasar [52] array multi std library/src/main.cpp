#include <iostream>
#include <array>

using namespace std;



// array multi dimensi oleh library
//sama saja dengan mendefinisikan array standart library biasanya,
//hanya berbeda sedikit

//dibuat const supaya dapat digunakan pada array sandart library
//standart library memerlukan konstanta untuk mendefinisikan array
const int baris = 2;
const int kolom = 3;

void printArr(array<array<int, kolom>, baris> arrs){ //kolom dan baris akan mengambil pada global variabel
	cout << "\n-------- orint array multi dimensi -------------\n";
	cout << "[";
	for(array<int, kolom> arr : arrs){
		cout << "[";
		for(int angka : arr){
			cout << angka;
			cout << ",";
		}
		cout << "],";
	}
	cout << "]" << endl;
}

int main(){
	//bila pada array biasa yang dimasukan adalah tipe data
	//maka pada array multi dimensi yang dimasukan adalah array.
	//karena array juga termasuk tipedata..
	//array<tipe_data, panjang> nama_var;
	//array<array<tipe_data, panjang_level_2>, panjang_level_1> nama_var;


	array<array<int, kolom>, baris> arrMulti = {12,5,5,11,7,7}; //saya tidak bisa menggunakan kurawal dalam kurawal dalam standart library

	cout << "array[0][0] : " << arrMulti[0][0] << endl;
	cout << "array[0][1] : " << arrMulti[0][1] << endl;
	cout << "array[0][2] : " << arrMulti[0][2] << endl;
	cout << "array[1][0] : " << arrMulti[1][0] << endl;
	cout << "array[1][2] : " << arrMulti[1][2] << endl;
	cout << "array[1][2] : " << arrMulti[1][2] << endl;

	//melakukan print array
	printArr(arrMulti);
	return 0;
}


