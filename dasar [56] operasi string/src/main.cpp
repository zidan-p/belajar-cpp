#include <iostream>
#include <string>

using namespace std;

//operasi pada  string//

int main(){
	string kucing("komeng");

	//menampilkan string
	cout << "peliharan saya bernama : " << kucing << endl;

	//mengambil karakter index terntentu
	//karena string adalah kumpulan char, maka kita bisa memperlakukanya seperti array char
	cout << "karakter awal kucing : " << kucing[0] << endl;
	cout << "karakter awal kucing : " << kucing[1] << endl;
	cout << "karakter awal kucing : " << kucing[2] << endl;
	cout << "karakter awal kucing : " << kucing[3] << endl;
	cout << "karakter awal kucing : " << kucing[4] << endl;
	cout << "karakter awal kucing : " << kucing[5] << endl;
	cout << "karakter awal kucing : " << kucing[6] << endl; //sudah dihandle oleh cpp bahwa index 6 tidak ada

	//merubah karakter
	kucing[3] = 'o'; //char menggunakan petik 1
	cout << "kucingku bernama : " << kucing << endl;

	//menyambung string, contactenation

	//-- 1 --
	string kata2("kucing saya adalah " + kucing);
	cout << kata2 << endl;

	//-- 2 --
	string kata3("berlari");
	kata2.append(" " + kata3);
	cout << kata2 << endl;

	//-- 3 --
	string kata4(" cepat sekali");
	kata2 += kata4;
	cout << kata2 << endl;

	
}


