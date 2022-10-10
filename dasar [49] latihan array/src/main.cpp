#include <iostream>
#include <array>

using namespace std;


//program sederhana untuk membuat grafin nilai siswa
//berdasarkan inputan user

/*
----- teknis -----
+ program berjalan
+ program meminta inputan 0 - 9
+ user memasukan input
+ program meminta inputan 10 - 19
+ user memasukan input
... hingga input 90 - 99
+ input 100 sendiri
+ tampikan semua hasil input user

*/

int main(){

	array <int, 11> dataNilai; //karena rentang data adalah 11 (karena 100 sendiri)
	cout << "----------- masukan banyak siswa dengn rentang nilai berikut ------------" << endl;

	//mengisi data dari inputan user
	// for(int i = 0; i < dataNilai.size(); i++){
	// 	if(i >= dataNilai.size() - 1){
	// 		cout << "[100] ==> ";
	// 		cin >> dataNilai[(dataNilai.size() - 1)];
	// 		cout << endl;
	// 		break;
	// 	}
	// 	cout << "[" << i*10 << "-" << i*10+10-1 << "] ==> ";
	// 	cin >> dataNilai[i];
	// }

	//isi dendiri
	dataNilai[0] = 12;
	dataNilai[1] = 15;
	dataNilai[2] = 17;
	dataNilai[3] = 32;
	dataNilai[4] = 12;
	dataNilai[5] = 42;
	dataNilai[6] = 42;
	dataNilai[7] = 23;
	dataNilai[8] = 50;
	dataNilai[9] = 22;
	dataNilai[10] = 10;

	cout << "\n-------------- grafik nilai -----------------" <<endl;
	//versi menyamping
	// for(int i = 0; i < dataNilai.size(); i++){
	// 	cout << "[" << i*10 << "-" << i*10+10 << "] : ";
	// 	for(int j = 0; j < dataNilai[i]; j++){
	// 		cout << " *";
	// 	}
	// 	cout << endl;
	// }


	// versi kebawah
	//cari nilai maksimalnya terlebih dahulu, lalu digunakan untuk perulangan
	int max = dataNilai[0];
	for(int i = 1; i < dataNilai.size(); i++){
		if(dataNilai[i] > max){
			max = dataNilai[i];
		}
	}

	cout << "nilai maksimalnya adalah : " << max <<endl;
	for(int i = max; i >= 0; i--){
		for(int j = 0; j < dataNilai.size(); j++){
			if(dataNilai[j] >= i){
				cout << "  ***  ";
			}else{
				cout << "       ";
			}
			cout << " ";
		}
		cout << endl;
	}
	cout << "[00-09] [10-19] [20-29] [30-39] [40-49] [50-59] [60-69] [70-79] [80-89] [90-00] [-100-]" <<endl;

	cin.get();

	int i;
	cin >> i;
	return 0;
}
