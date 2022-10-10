#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

//----- sorting pada array ---------
// yaitu mengurutkan data pada array dengan urutan terntu
// dilakukan dengan mengimport library algorithm
//disini logikanya sederhana, jadi saya tidak akan terlalu banyak menjelasakan

//konstannta untuk ukuran fix array
const int arraySize = 10; //size_t = unsigned long

//untuk print array (int)
void printArr(array<int, arraySize> &angka){ //hmm ? kok yg diambil alamatnya ya? 🤔
	cout << "Array : ";
	for(int &a : angka){
		cout << a << " ";
	}
	cout << endl;
}


//untuk print array (char)
void printArr(array<char, arraySize> &angka){ //hmm ? kok yg diambil alamatnya ya? 🤔
	cout << "Array : ";
	for(char &a : angka){
		cout << a << " ";
	}
	cout << endl;
}


int main(){
	//membuat array char dan int
	array <int, arraySize> angka = {1,4,3,2,5,6,8,9,7,4};
	array <char, arraySize> huruf = {'c','d','d','v','e','t','y','q','w','r'};
	
	cout << "## sebelum disorting ##\n";
	printArr(angka); 
	printArr(huruf);

	//melakukan sorting
	//sort(memory_pertama, memory_terakhir)
	std::sort(angka.begin(), angka.end());
	std::sort(huruf.begin(), huruf.end());

	cout << "\n## setelah disorting ##\n";
	printArr(angka); 
	printArr(huruf);

	return 0;
}
