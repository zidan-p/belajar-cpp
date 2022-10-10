#include <iostream>

using namespace std;

// array

/*
	akhirnya kita mencapai pada materi mengenai array di cpp
	ini juga merupakan salah satu hal yang membuat mempelajari dan 
	memahami cpp sangan sulit, sangat sulit sekali.

	bayangkan, array disini  berbeda dengan array pada bahasa umumnya.
	tidak ada yang namanya method bawaan cpp disini untuk memanipulasi array.
	sehingga untuk memudahkan dalam pengaksesan array iperlukan standart library.

	dan juga array pada cpp diwujudkan sebagai alamat memory, sehingga setiap
	mengakses array secara langsung(tanpa index) akan menghasilkan alamat memory tempat
	array disimpan.

	dibawah ini merupakan definisinya

	------------------------ ARRAY PADA C++ ------------------------------
	array merupakan sebuah kumpulan data yang disusun berdasarkan urutan tertentu
	yang bernama index, jadi untuk mengakses sebuah nilai dari kumpulan data di array
	ini, maka disertakan pula index nilai targetnya. jika masih bingung maka bisa diliat
	nanti, intinya array adalah kumpulan data.

	array pada cpp dibuat dengan urutan alamat (juga nilai) memory yang runtut. sehingga
	setiap rentang memory array akan berisi alamat (nilai juga) dari kumpulan data.

	perumpamaanya dibawah VVVV

rentang	:	|----------- rentang array -------------|   memory lain..
			---------------------------------------------------------
alamat	:	|A		|B		|C		|D		|E		|XXX	|XX		|
			---------------------------------------------------------
index	:	   [0]	   [1]	   [2] 	   [3]	   [4]	


	dalam setiap dataset(kumpulan data) array, setiap alamat memory data terurut runtut.
	seperti setelah A maka akan B, lalu C dan seterusnya..
	meski urut, antara alamat memory data masih memiliki jarak tertentu.
	jarak ini dihasilkan dari besar tipe data dataset array.
	contoh: bila dataset array bertipe data int, maka jarak antara memory
	akan sebesar 4 byte (32bit), hal ini karena jarak tersebut akan digunakan 
	untuk menyimpan nilai dari data tersebut.

	nah, karena wujud array berupa alamat memory, maka kita bisa mengakses nilainya
	berdasarkan alamat memory array tersebut. kita dapat melakukanya jika kita 
	sudah mengetahui ukuran tipe data dataset array, sehingga jarak antar alamnya
	sudah jelas.

	dari ulasan diatas, saya yakin kebanyakan yang membaca pasti akan bingung.
	karena saya melakukan ulasan terlebih dahulu sebelum prakeknya, sehingga
	sulit untuk membayangkan bagaimana cara kerja dan teknis array di cpp.
	oleh karen itu setelah pembahasa ini, saya akan memberikan rekap seingkat
	saat praktek dibawah, jadi saya harap sedikit banyak yang membaca dokumentasi ini
	mejadi sedikit ada bayangan mengenai cara kerja array di cpp.


PRAKTEKNYA 
*/


int main(){

	//cara membuat array (cara 1) [standart]
	//sama seperti membuat variabel biasa, tapi ditambah dengan nilai panjang array "[panjang]"
	int nilai[5]; 
	//mengisi masing2 index array (index array dimulai dari 0)
	nilai[0] = 12; //inde pertama, dimulai dari 0
	nilai[1] = 10;
	nilai[2] = 16;
	nilai[3] = 18;
	nilai[4] = 11;

	//--- printing --
	//juga cara mengakses nilai array dengan index
	cout << "nilainya adalah : " << nilai[0] <<endl;
	cout << "nilainya adalah : " << nilai[1] <<endl;
	cout << "nilainya adalah : " << nilai[2] <<endl;
	cout << "nilainya adalah : " << nilai[3] <<endl;
	cout << "nilainya adalah : " << nilai[4] <<endl;

	//cara mengakses nilai array 2 [pointer]
	//karena array itu adalah merupakan suatu kumpulan rentang memory
	//contoh dibawah
	cout<< nilai <<endl; //akan menghasilkan alamat rentang awal array

	/*
	rentang	:	|----------- rentang array -------------|   memory lain..
				---------------------------------------------------------
	alamat	:	|	A	|	B	|	C	|	D	|	E	|XXX	|XX		|
				---------------------------------------------------------
	index	:	   [0]	   [1]	   [2] 	   [3]	   [4]	
				^
				^
				dibagian ini hasil nilai kita mengeprint nilai array
	*/


	//maka kita bisa mengakses index selanjutnya dengan menggunakan pointer
	//dan karena pada kasus kita tipe datanya adalah int, maka jaral setiap data dalam kumpulan
	// akan sebesar 4 byte.
	//hal ini karena besar "int" adalah 4 byte
	//dan karena setiap 1 int adalah 4 byte maka kita bisa mengakses indexnya dengan cara berikut
	//contoh index ke 2;

	int *ptr = nilai; //tidak perlu '&' karena variabel array menyimpan alamat memory
	*(ptr + 2) = 100; //mengubah array index 2 (nilia[2]) menggunakan pointer

	cout << "\n--------- conoth menggunakan pointer -------\n";
	cout << "nilainya adalah : " << nilai[0] <<endl;
	cout << "nilainya adalah : " << nilai[1] <<endl;
	cout << "nilainya adalah : " << nilai[2] <<endl;
	cout << "nilainya adalah : " << nilai[3] <<endl;
	cout << "nilainya adalah : " << nilai[4] <<endl;



	/*
	========================== mengambil data dan pengolahan pada array =======================
	sayangnya ini adalah cpp, tidak ada fungsi bawaan untuk melakukan mendapatkan data
	seperti panjang array, jumlah bilangan, mengetahui tipe data, sortign dll.
	ini juga yang membuat cpp menjadi bahasa yang sulit dipelajari oleh pemula.

	kita hanya bisa melakukan hal2 diatas dengan menngunakan manipulasi memory.
	akan saya contohkan nanti, tapi untuk kedepanya saya tidak akan menggunakan
	kita akan sering tidak menggunakan manipulasi array dengan memory, melainkan
	menggunakan library bawaan dari cpp yang akan membuat kita bisa melakukan 
	hal2 seperti function array pada bahasa umumnya.

	dibawah adalah cara untuk mendapatkan jumlah array dengan operasi memory	
	*/

	//untuk mengetahui ukuran array (function bawaan iostream)

	cout << "\n------ untuk mengeprint array --------" << endl;
	cout  << "ukuran array (rentang array setdata ) : " << sizeof(nilai) << " byte" << endl; //ukuranya byte
	//untuk mengambil jumlah member array, dengan membaginya dengan besar tipe data
	cout << "banyak anggota array : " << (sizeof(nilai)/sizeof(int)) << " anggota" << endl;

	int a;
	cin.get() >> a;
	return 0;
}
