#include <iostream>
#include <string>

using namespace std;

// perbandingan pada string //

int main(){
	char nama[4] = {'H','A','D','I'};

	// tidak seperti bahasa scripting, cpp tidak bisa menggunakan == untuk perbandingan
	// if(nama == "HADI"){ //tidak bisa digunakan untuk perbandingan 
	// 	cout << "halo hadi "<<endl;
	// }

	//kita juga tidak bisa menggunakan array lain sebagai pembading dng tanda '=='
	// char pembanding[4] = {'H','A','D','I'};
	// if(nama == pembanding){ //tidak bisa digunakan untuk perbandingan 
	// 	cout << "halo hadi "<<endl;
	// }

	//jadi untuk melakukan perbandingan di cpp 
	//tipe data yang dibandingkan juga harus berupa string.
	//contoh yaitu dengan penggunaan input dibawah

	string namaRahasia("zidan");
	string input;
	for(;;){ //artinya akan selalsu true
		cout << "tebak nama : ";
		cin >> input;

		if(input == namaRahasia){
			cout << "Tebakan anda benar!! \n";
			break;
		}
		
	cout << "Tebakan salah\n";
	}




	cout << nama << endl << endl;
}


