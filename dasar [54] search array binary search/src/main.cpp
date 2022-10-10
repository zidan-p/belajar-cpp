#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

//----- searcing pada array --------
//mealkukan search pada array menggunakan standart library algoritm
//tidak perlu saya jelaskan karena ini hanya operasi sederhana (penggunaanya, buka pembuatananuya)
//singkat untuk mencarai nilai yang sesuai pada array
//caranya seperti dibawah

//konstannta untuk ukuran fix array
const size_t arraySize = 10; //size_t = unsigned long

//untuk print array (int)
void printArr(array<int, arraySize> &angka){ //hmm ? kok yg diambil alamatnya ya? 🤔
	cout << "Array : [ ";
	for(int &a : angka){
		cout << a << " ";
	}
	cout << "]" << endl;
}

//untuk print array (char)
void printArr(array<char, arraySize> &angka){ //hmm ? kok yg diambil alamatnya ya? 🤔
	cout << "Array : [ ";
	for(char &a : angka){
		cout << a << " ";
	}
	cout << "]" << endl;
}


int main(){
	bool found = false;
	int targetInt;
	array <int, arraySize> arrInt = {12,32,5,3,2,1,7,8,9,11};
	printArr(arrInt);

	//dalam melakuakn search, hal yang haru sdilakukan adalah sort array dulu
	sort(arrInt.begin(), arrInt.end());
	printArr(arrInt);

	//barualh array yg sudah dirutkan di cari nilai targetnya.
	//disini menggunakan algoritma binary search untuk mencari angka target.
	//untuk lengkapnya tentang binary search bia dicari digoogle, singkatnya
	//binary search adalah algorita mencari data dengan melakukan pembagian 2 data
	//sebelum melakuakan searc, masukan bilangan target
	cout << "masukan angka target : ";
	cin >> targetInt;

	//binary_search(address_awal_arr, address_akhir_arr, target)
	//function ii mengembalikan nilai boolean
	found = binary_search(arrInt.begin(), arrInt.end(),targetInt);
	cout << "hasil cari : " <<  (found ? "ditemukan!" : "tidak ada..") << endl;

	return 0;
}
