#include <iostream>

using namespace std;

/*
---- default argument ----
default argument adalah nilai default suatu argumen,
apabila dalam pemanggilan fungsi, nilai argumen tersebut tidak
disertakan. bila masih bingung mungkin bisa melihat sumber kodenya dibawah.

cara membuatnya mirip dengan cara di js, yaitu dengan menambahkan sama dengan 
ketika membuat parameter, lalu diisi denga nilai defaultnya.

apabila menggunakan prototype, maka cukup tulis di prototypenya saja argument defaultnya.

lengkapnya bisa lihat dibawah
*/

//prototype
int volumeKubus(int panjang = 1, int lebar = 1, int tinggi = 1);


//contoh default paramter bila tidak menggunakan prototype
void print(int number = 0){
	cout << "angkanya adalah : " << number <<endl;
}

int main(){

	cout << "---- contoh default argument ---" << endl;
	print(volumeKubus(2,3,4));
	print(volumeKubus(2,3));//akan tetap dijalankan
	print(volumeKubus(2));//akan tetap dijalankan
	print(volumeKubus());//akan tetap dijalankan
	print();//akan tetap dijalankan


	return 0;
}


int volumeKubus(int panjang, int lebar, int tinggi){
	return panjang * lebar * tinggi;
}



