#include <iostream>
#include <string>

using namespace std;

//##STRING##
/*
	siapa pun orang yang sudah berkecimpung dinua pemrograman pasti sudah
	familiar dengan yang namanya string.
	string, teknisnya disebut sebagai kumpulan karakter.
	pengertian kasarnya, string adalah text atau kalimat yang nantinya
	akan dilakukan pnegolahan tersendiri.

	tidak seperti pada bahasa pemrograman pada umunya, di cpp tidak ada yang 
	namanya tipe data string. kedepanya semua yang kita anggap sebagai string,
	cpp akan menganggapnya sebagai array dari char. jadi untuk membuat suatu string
	kita aka memerlukan standart library dari cpp, yaitu "string";

	oh iya, meskipun bukan tipe data primitif (asli di cpp), dalam pengoprasianya
	string text (bukan variabel atau keyword lain) harus dimasukan kedalam tanda petik2. hal ini supaya 
	menegaskan bahwa text tersebut adalah string.
*/

int main(){
	//contoh string kumpulan char 
	char kata[4] = {'k','u','d','a'};
	cout << kata <<endl; //bila char, maka akan dikembalikan kumpulan charnya


	//contoh dengan menggunkana standart library
	//string nama_var("text dari string");

	string word("adalah benar");
	cout << word << endl;

	//contoh meakuakn input dan outpun string
	string inp;
	cout << "masukan kata atau kalimat : \n<< ";
	cin >> inp;
	cout << "text yg anda maasukan adalah \n>> ";
	cout << inp;
	//bila menggunakna cara diatas, apabila menggunkana spasi untuk menginputkan string
	//maka hanya kata pertama yang dioutput, sya juga kurang tahu mengapa bisa begitu.
	//tapi katanya  harus menggunakan library atau plugin stream lain untuk mendapatkan 
	//text penuh


	return 0;
}


