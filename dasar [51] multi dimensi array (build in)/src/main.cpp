#include <iostream>

using namespace std;


// array multi dimensi
/*
	sama yaitu array, namun konsep disini yaitu array didalam array.
	jadi karena array menyimpan kumpulan data dengan jenis yang sama.
	maka kita juga bisa menyimpan kumpulan array kedalam array.

	untuk contohnya nanti, saya akan mencoba membuat array 2 dimensi.
	yaitu hanya array yang didalamnya ada kumpulan array, dalamnya tingkat hanya 2 array.
	gambaran vvVV

	-------------------------
	| index	|  [0]	|  [1]	| array nya
	-------------------------
	|  [0]	|	4	|	5	|
	-------------------------
	|  [1]	|	6	|	3	|
	-------------------------
		^
		^
	isi dari arraynya (berupa array berindeks)
	conoth diatas, sebuah array yang dirupakan matriks (tabel) memiliki index masing2 untuk mengakses
	nilainya.
	untuk bagaimana teknis dan jelasnya bisa dilihat pada program dibawah
*/

//ini function untuk mengeprint array
//bisa diloncat, dilihat annti saja ketika pemanggilan function.
//function ini hanya bisa dimengerti bila sudah berada dimain
//disini saya menggunakna pointer untuk mengakses array,
//karena dasarnya variabel array akan mengembalikan(menghasilkan)
//nilai memory addres. jadi memory ini yg akan dioleh oleh functionya
void dis(int *ptrArr, int baris, int kolom){
	int index = 0; //untuk memonitor perubahan alamat memory dalam pengaksesan array
	cout << "array adalah : " << endl;
	cout << "[ ";
	for(int i = 0; i < baris; i++){
		cout << "[ ";
		for(int j = 0; j < kolom; j++){
			cout << " " << *(ptrArr + index) << " ,"; //disini bagaimana array diakses
		}
		cout << " ],";
	}
	cout << " ] \n";
}


//sama dengan function yg diatas, bisa diloncati
//karena ini adalah veris lain dari yang diatas
void prt(int arr[][3]){ //nilai array selain level pertama (baris khusu array 2 dimensi) tidak wajib diisi, lainya wajib
	cout << "--- menampilkan array ke dua --- \n[ ";
	for(int i = 0 ; i < 2; i++ ){
		cout << "[ ";
		for(int j = 0; j < 3; j++){
			cout << arr[i][j] << ", ";
		}
		cout << " ]";
	}
	cout << " ]";
}

int main(){

	//membuat array multi dimensi
	//disini saya akan membuat 2 dimensi
	//int nama_array[panjang_array][panjang_array_didalam_array] =  isi
	//dibawah bagaimana cara mengisinya
	int arr[2][3] = {{ 11,12,12 }, {14, 11,15}};
	//diatas bagaimana kita membuat array multidimensi, kita memisahi antara satu arrai tingkap pertama
	//dengan kurung kurawal. kurawal ini hany aopsional, supaya memudahkan untuk memahami
	//atau bisa dibuat seperti ini {11,12,12,14, 11,15}

	// ------------ mengakses array -----------
	//conoth untuk mengakses array, pengaksesannya haru sesuai dengan index
	cout << arr[0][0] << endl; //11
	cout << arr[0][1] << endl; //12
	cout << arr[0][2] << endl; //12
	cout << arr[1][0] << endl; //14
	cout << arr[1][1] << endl; //11
	cout << arr[1][2] << endl; //15
	//cara seperti ini juga bagaimana kita mengakses data dan mengubah data

	//-------------- memory dalam array multidimensi ------------
	//meski bentuknya bisa diibaratkan seperti tabel tapi managemen
	//memory untuk array multi dimensi masih seperti pada array umumnya.
	//yaitu disimpan secara linear
	//ilustrasinya dibawah

	/*

	arr[2][2] --> array dengan pangjang level 1 (2) dan level 2 (2)
	*****************************************************************
	|-- memory array level 1 ----------	| ---- memory lain ...		|				
	|-------------------------------------------------------------	|
	|  --  arr[0] --  |  --  arr[1] --  |			|		|		|		|
	|-------------------------------------------------------------	|
	| [0][1] | [0][1] | [1][0] | [1][1] |		|		|		|	|
	|---------------------------------------------------------------|
	|A		 |B		  |C 	   |D		|		|		|		|	| <<< memory address saling runtut
	*****************************************************************

	seperti diatas bagai array milti dimensi menyimpan memory.
	jadi array level 1 memiliki beberapa bagian,
	dan setiap bagian2 tersebut memiliki bagian kumpulan nilai.


	*/
	//contoh function menggunakna functiion untuk array
	//lihat function diatas
	int baris = 2;
	int kolom = 3;
	int arrEg[baris][kolom] = {{ 4,3,6 }, {11,2,1}};
	cout << "-- percobaan -- \n";
	cout << *arrEg << " | ";
	cout << &arrEg << " | ";
	cout << arrEg << endl;
	//lah..kok sama, teryata ketiga bentuk diatas, entah kenapa hasilnya sama
	//sepertinya saya harus belajar lebih banyak cpp

	dis(*arrEg, baris, kolom);

	int arrEg2[2][3] = {{ 4,3,6 }, {11,2,1}};
	prt(arrEg2); //untuk passing array ke function cara kedua, tidak bisa menggunana variabel untuk melakukanya
	//karena compiler cpp menganggap varibel di dalam kurung siku sebagai addres lain




	return 0;
}

