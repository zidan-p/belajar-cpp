#include <array>
#include <iostream>

using namespace std;

//mengakses substring
//mendapat suatu string di dalam string
//susah di dijelaskan, jadi lebih baik langsung dilihat prakteknya

int main(){

	//sample string
	string kalimat_1("iping bapaknya hadi di dinding");
	string kalimat_2("nur ditolak hadi di jadikan medi");

	//cout
	cout << "1 : " << kalimat_1 << endl;
	cout << "2 : " << kalimat_2 << endl;

	//---- beberapa method untuk mengakses substring

	//substring (substr)
	//untuk mendapat string berdasarkan index dari string utamanya
	//substr(index,panjang) 
	//-> index merupakan karakter pertama, sementara panjang dihitung dari karakter pertama
	//index selalu dimulai dari 0
	cout << "substr 1 >> " << kalimat_1.substr(6,8) << endl;
	cout << "substr 2 >> " << kalimat_2.substr(4,7) << endl;


	//cari posisi substring
	//find(string, [panjang]) -> panjang bersifat opsional
	//method digunakan untuk mencari index letak string yang dicari.
	//bila menemukan akan 2 string yg dicari pada target, maka
	//akan mengembalikan nilai index pertama

	cout << "posisi bapak : ";
	cout << kalimat_1.find("bapak") << endl; //6
	cout << "posisi hadi : ";
	cout << kalimat_2.find("hadi") << endl; //4
	cout << kalimat_2.find("bapak") << endl; //hasilnya akan bilangan random karena tdk ada yg sesuai


	//atau bila kita menggunakan parameter ke dua, kita bisa membuat
	//fungsional program untuk mencari semua string yang sesuai
	int pos = kalimat_1.find("di"); //memasukan indexpertama dari string yg dicari
	cout << "posisi : " << pos << endl;
	int pos2 = kalimat_1.find("di", pos + 1); 
	//mencari string yg sesuai namun dengan index awal lebih dari index string yang ditemukan pertama.
	//hasilnya akan mencari hasil dengan nilai selanjutnya.
	//program diatas bisa kita buat fungsionalnya bila mau

	//bila untuk mencari dengan index dari kanan
	//meski demikian urutan index nya masih sama (kiri -> kanan)
	cout << "mencari dari kanan : " << kalimat_1.rfind("di") << endl;






	

	return 0;
}
