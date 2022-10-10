#include <iostream>

using namespace std;

/*
--- overlaoding fungsi ---
overloading fungsi digunakan supaya kita dapat membuat fungsi dengan nama
yg sama, namun memiliki parameter yg berbeda, sehingga cara menangani
argumen beserta outputnya juga berbeda.

misal, saya ingin punya sebuah fungsi untuk menghitung kotak.
nah, karena jenis2 kotak ada 2, yaitu persegi (sisi sama) dan persegi panjang.
maka saya buat 2 fungsi dengan nama yg sama "hitungKotak()" untuk menghandle
masing2 perhitungan,untuk fungsi yg argumen hanya 1, maka akan ditangani sebagai
sebagai hitung kotak untuk persegi (s * s), namun bila argumen ada 2, maka akan 
di handle sebagai persegi panjang (p * l).

bingung?
untuk lebih jelas lihat contoh..

*/

int hitungKotak( int p, int l){
	return p * l; //ditangani sebagai operasi menghitung luas persegi panjang
}

//overloading
int hitungKotak( int s){
	return s * s; //ditangani sebagai operasi menghitung luas persegi
}

//overloading
double hitungKotak( double p, double l){ //kita bahkan bisa membuat handle apabila argumen yg dikirim adalah double
	return p * l;
}

//overloading
double hitungKotak( double s){
	return s * s; //ditangani sebagai operasi menghitung luas persegi
}

void println(int a){
	cout << "hasil adalah : " << a << endl;
}
//overloading
void println(double a){
	cout << "hasil adalah : " << a << endl;
}

int main(){

	cout << " ---- contoh overloading ----"<< endl;
	println(hitungKotak(23,12));
	println(hitungKotak(12));
	println(hitungKotak(23.4,12.7));
	println(hitungKotak(5.4));

	return 0;
}






