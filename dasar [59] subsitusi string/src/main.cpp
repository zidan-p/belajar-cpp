#include <array>
#include <iostream>
#include <string>


using namespace std;

//subsitusi string
//melakukan pergantian sebagian atau seluruh string dengan method tertentu

int main(){

	string kalimat_1("hahahaha HADI!!");
	string kalimat_2("goreng goreng masak masak tumis sunarko");

	//preview string
	cout << "## initial string ##" << endl;
	cout << "1 : " << kalimat_1 << endl;
	cout << "2 : " << kalimat_2 << endl;

	//swab string
	//untuk menukarkan nilai string
	//swab(string yg akan ditukar)
	kalimat_1.swap(kalimat_2);
	cout << "\n## swap string ##" << endl;
	cout << "1 : " << kalimat_1 << endl;
	cout << "2 : " << kalimat_2 << endl;

	//replace string
	//replace(index, panjang, string)
	kalimat_1.replace(7,6,"nonggeng");
	//menggunakan pengetahuan dari ebelumnya
	kalimat_2.replace( 
		kalimat_2.find("ha"),
		2,
		"ya"
	);
	cout << "\n## replace string ##" <<endl;
	cout << "1 : " << kalimat_1 << endl;
	cout << "2 : " << kalimat_2 << endl;

	//insert string
	//menambahkan string setelah target index.
	//misal, targetnya adalah index 8, maka index 8 akan diisi string
	//dan index 8 string asli akan di pindah ke akhir string input
	//insert(index_target, string)
	kalimat_2.insert(15, " menek");
	cout << "\n## insert string ##" <<endl;
	cout << "1 : " << kalimat_1 << endl;
	cout << "2 : " << kalimat_2 << endl;

	return 0;
}

