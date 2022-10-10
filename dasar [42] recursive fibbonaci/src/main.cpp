#include <iostream>

using namespace std;

/*
---- factorial juga, namun untuk fibbonaci
*/

//fet fibbonacci
int fn_fibbo(int n){
	if((n == 0) || (n == 1)) return n;

	return fn_fibbo(n - 1) + fn_fibbo ( n - 2); //bagian ini lah yg nantinya akan bercabang2
	//nah ini yg saya bingung, bagaimana cara recursive fibbonaci ini bekerja?
	//bagaimana hanya dengan penjumalah 2 buah fungsi recursive bisa menghasilkan output yg sesaui
	// apakah setiap recursive mengambil data dg nilai yg saa namun dalam proses yg berbeda?
	// pikiran saya begitu. tapi intinya saya masih belum terlalu paham bagaiaman cara ini berkerja
	// sebenarnya lebih mudah saya memahaminya apabila saya buat visualisasi untuk recusive ini
	// untuk setiap percabangan fungsiny. namun karena saya terburu2, maka akan saya skip
	// terlebih dahulu
}

int main(){
	cout << " ---- contoh menggunakan factorial -------\n";
	cout<< "hasil => \n" <<fn_fibbo(9) << "\n";
	
}
















