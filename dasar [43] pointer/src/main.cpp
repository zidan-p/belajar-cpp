#include <iostream>

using namespace std;

// ======= !! POINTER !! =======

/*
mungkin inilah sesuatu yg memuat bahasa cpp menjadi salah satu bahasa
yg sulit untuk pelajari untuk pemula, bahkan profesional pun terbuat bingung
oleh hal ini.

sebelum melanjutkan struktur dan penggunaan pointer, ada baiknya kita mempelajari
bagaimana cara memory menyimpan nilai di komputer.

misal, kita menginisialisasi varibel a dan diisi dengan nilai 10;
int a = 10;

lalu kita membuat fungsi untuk membuat suatu angka kuadrat
int kuadrat(int x){
	return x * x;
}

lalu kita tampikan nilai nilai a dan kuadrat nilai a;

cout << a << "\n";
cout << kuadrat(a) << "\n";

dari kasus diatas kira2 berapa memory yg sudah kita gunakan untuk menjalankan
seluruh statementnya? jika berdasarkan memory management cpp, berikut penggunaan memorynya

ketika kita menginisialisasi dan mengisi varibel a, kita sudah sudah mengisi data
dan alamt kedalam memory.
nah, ketika kita mengakses fungsi kuadrat(a), disini kita membuat kembali data dan alamat
untuk parameter x kedaalam memory. ilustrasinya sebagai dibawah
-------------------------------------------------
|#alamat a	|#alamt	x	|		|		| . . . |
-------------------------------------------------

dan gambaran tersebut sudah terlihat bahwa kita sudah harus menyiapkan 2 tempat dan data 
kedalam memory, pada data yg diakses itu nilainya sama, hanya berbeda alamatnya saja.
[#alamat a -> int(10)]
[#alamat x -> int(10)]
*hanya ilustrasi

bila hanya program sederhana tentunya tidak masalah, karena nilainya hanya seberapa.
namun bagaimana apabila kita sudah harus mengakses data besar seperti object?
dan bagaimana apabila fungsi tersebut digunakan tidak hanya untuk variabel a saja?
mungkin ada variabel lain yg menggunakanya. berapa banyak memory yg sudah terpakai.

saat inilah pointer digunakan!
dengan pointer kita tidak akan membuat alamat dan data memory baru, namun kita hanya akann
mengakses alamat memory dari variabel yg di pointkan.
ilustrasinay begini UwU
-------------------------------------------------
|#alamat a	|			|		|		| . . . |
-------------------------------------------------
 ^^^ alamat ini yg nantinya akan diakses oleh variabel pointer

masih bingung?
sayangnya diatas hanya salah satu kasus dari mengapa pointer digunakan,
masih ada kasus lain yg mungkin tidak saya ketahui penggunaanya.
jadi, lebih baik kita lihat contoh prakteknya langsung-->>

** note **
jika ada yg bertanya:
kalau kayak gitu mengapa cpp harus membuat memory baru? mengapa tidak langusung mengakses
memory dalam argumenya saja?

itu karena antara argumen yg dimasukan dan parameter yg diakses function, itu sudah berbeda
scope, tentu saja dengan hal ini antara variabel di dalam argument ataupun function 
tidak bisa mengakses satu sama lain, artinya segala sesuatu yg berubah dalam function
tidak akan mepengaruhi variabel parmeternya.
perlu diingat pula, bila kita menggunakan pointer, segala perubaha pada pointernya
akan menyebabkan perubaha pula pada variabel yg di point. sehingga tidak selalu kita
akan menggunakan pointer untuk kasus function diatas, mungkin untuk optimisasi
atau statement yg tidak ada perubahan dengan write data.

*/

/**
 * ## note ##
 * + pointer akan selalu pertipe data integer (int)
 * + value pointer akan selalu erubah2, karena memory akan selalu berubah2 juga
 */



int main(int argc, char const *argv[])
{
	int a = 10;
	cout << &a << "\n"; //cara mengakses alamat memory a
	cout << a << "\n";
	
	int *aPtr = &a; //dengan menggunakan arterisk "*" kita bisa menjadikan variabel pointer, sehingga dapat menyimpa alamat memory
	cout << "nilai pointer aPtr : " << aPtr << "\n"; //hasilnya akan sama dengan &a 

	//atau kita juga bisa mengassign pointer ke nullpointer lalu mengisi dengan alamat nanti
	int *aPtrLain = nullptr; //assign ke pointer kosong
	cout << "nilai pointer aPtrLain : " << aPtrLain << "\n"; //kosong (di windows => 0x0)
	aPtrLain = &a ; //lalu kita ssign sekarang
	cout << "nilai pointer aPtrLain sudah assign : " << aPtrLain << "\n"; //kosong (di windows => 0x0)
	
	
	//dereferencing
	//mengambil data dari pointer
	cout << "mengambil data (value buka alamt) dari aPtr : " << *aPtr << "\n";
	
	return 0;
}

















