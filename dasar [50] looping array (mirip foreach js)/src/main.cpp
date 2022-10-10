#include <iostream>

using namespace std;


//looping untuk c++11 ++ (🤔 13?)
//yg penting seperti itu

//disini saya akan menggunakna looping untuk mengases nilai masing2 array
//sintaksnya ada dibawah
int main(){

	int daftarNilai[10] = {0,1,2,3,4,5,6,7,8,9}; // cara lain membuat array di cpp

	//melakukan perulangan khusus untuk array
	for(int nilai : daftarNilai){ //varibel nilai disamping akan berisi nilai setiap array tiap2 perulangan
		//contohnya, saat kita cout, aka menghasailkan nilai masing2 array setiap perulangan sebanyak panjang array
		// cout << nilai <<endl;

		// namun varibel nilai ini berada pada address memory yang sama setiap saat.
		//karena variabel nilai ini menggunakan memory baru untuk mendapatkan nilai setiap index
		//hanya saja setiap melakukan looping, nilainya akan selalu di refresh
		//contoh dibawah
		cout << "nilai   : " <<nilai <<"\n";
		cout << "address : " << &nilai << "\n\n"; //akan selalu sama
		nilai = 1; //sehingga ini tidak akan mengubah nilai array
	}

	//cek apakah nilai berubah
	cout << "\n---- cek apakan nilai berubah -----\n";
	for(int i : daftarNilai){
		cout << "nilai : " << i <<endl;
	}

	//bila ingin mengakses nilai sebenarnya maka bisa menggunakan cara dibawah
	//dengan mengambil reference sebenarnya
	cout << endl;
	for(int &nilaiRef : daftarNilai){
		cout << "nilai   : " <<nilaiRef <<"\n";
		cout << "address : " << &nilaiRef << "\n\n"; //akan mengambil alamat memory sebenarnya
		nilaiRef += 10; //akan mengubah nilai sebenarnya
	}

	//cek apakah nilai berubah
	cout << "\n---- cek apakan nilai berubah -----\n";
	for(int i : daftarNilai){
		cout << "nilai : " << i <<endl; //nilanya berubah 😮
	}


	return 0;
}

