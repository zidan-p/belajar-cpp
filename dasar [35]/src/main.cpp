#include <iostream>

using namespace std;

//berikan tipedata terlebih dahulu untuk fungsinya bila ingin mengembalikan nilai
//nilai yg diproses dalam function dinamakan parameter
int pangkat(int x){
    return x*x;
}

//untuk mnegolah lebih dari 1 parameter, kita tinggal menambahkan koma setelah 
// parameter pertama
int tambah(int x, int y){
    return x + y;
}

//atau ada pula sebuah fungsi yg tidak memiliki kembalian
//fungsi ini hanya memproses tapi tidak mengembalikan nilai apapun
//maksudnya, seumpama kita assign fungsi ini kedalam sebuah variabel
//maka tidak akan bisa
void tampilkan(int x){
    cout << "hasilnya adalah " << x << "\n";
}

/*
contoh penerapan functioin dengan kembalian
yaitu sebauah fungsi yang menhasilkan sebuah nilai dari setelah menjalankanya.
cara membuatnya bisa dilihat diatas
*/
int main(){
    int a = 10;
    int b = 12;

    cout << "cara menggunakan fungsi " << endl;
    //cara memanggil fungsi
    int hasilPangkat = pangkat(a); //funsi yg memiliki nilai yg dikembalikan bisa di assign ke variabel sesuai tipe datanya
    //adapau yg ada didalam kurung kurawal itu adalah nilai yg akan diproses
    //dalam ketika fungsi dipanggil, nilai tersebut dinamakan argumen
    cout << "hasil pangkat : " << hasilPangkat << "\n";

    int hasilTambah = tambah(a,b);
    cout << "hasil tambah :" << hasilTambah << "\n";

    // contoh menggunakan fungsi void
    tampilkan(pangkat(a));
    tampilkan(tambah(a,b));

}