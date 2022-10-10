#include <iostream>
#include <array>

using namespace std;

//standart library
/*
karena banyak kekurangan yang menyulitkan mengolah array
untuk nativenya. maka saat ini (dan kedepanya) kita akan 
menggunakan sebuah library jika berurusan dengan array.
yang standart library.

selain lebih mudah juga kita tidak perlu untuk membuat 
function kita sendiri untuk mengolah array.

oh iya, standart library ini adalah library standar yang
disertakan dengan compilernya untuk melakukan suatu operasi tertentu.
jadi kita lebih dimudahkan dalam membuat program cpp.
syntax dari standart library pada kebanyakan compiler pasti
sama, karena sudah ada organisasi khusus untuk menangani naming
conversionya.

khusus untuk array ini kita akan menginclude librarinya yaitu <array>.
lalu untuk bagai  mana cara penggunaanya simak hasil dari tutorial saya ini.

*/


int main(int argc, char const *argv[]){

	//membuat array dg standart library, tipe data int
	//array <tipe_data, jumlah> nama_array

	array <int, 10> cth_arr; //contoh pembuatan
	//oh iya, karena kita menggunakan standart library, sebenarnya arrya disampi
	//menggunakan std::. kita tidak memerlukanya karena kita sudah menggunakan namespace

	//mengisi data array dengan looping
	for (int i = 0; i < 10; i++){
		cth_arr[i] = (i+1)*i;
	}

	//menampilkan data dengan looping
	cout << "------ data dari array ------ \n";
	for (int i = 0; i < 10; i++){
		cout << "array ke " << i << " => " << cth_arr[i];
		cout << " || address -> " << &cth_arr[i] << endl; 
	}

	//mendapatkan ukuran arrya
	cout << "\nukuran array : " << cth_arr.size() << endl;

	// /address awal array
	cout << "address awal : " << cth_arr.begin() << endl;

	//address akhir
	cout << "address akhir : " << cth_arr.end() << endl; //benar2 akhir, bukan awalan data yg akhir

	//mengambil nilai dengan urutan ke 2 (nilai[1])
	cout << "nilai dengan urutan ke 2 (nilai[1]) : " << cth_arr.at(2) << endl <<endl;



	



	return 0;
}
