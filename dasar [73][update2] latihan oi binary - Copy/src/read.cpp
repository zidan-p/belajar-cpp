#include <iostream>
#include <fstream>

using namespace std;

//ini adalah file baca, oleh karena itu gunakan commad ini untuk
//untuk melakukan compile. ::>>
//g++ .\src\read.cpp -o .\bin\Main.exe
//lalu jalankan program main
//bin\Main.exe

//karena ini adalah file baca, maka perlu juga struktur untuk menerima
//input dari stream pembaca file binary. oleh karena itu disini akan 
//menggunakan struct daru main.

// struct Siswa{
//     int NIK;
//     char nama[50];
//     char kelas[50];
// };

struct Siswa{
    int NIK;
    string nama;
    string kelas;
};

int main(){
    Siswa bufSiswa;
    fstream readFile;
    //supaya melakukan pembacaan file biner
    readFile.open("data.bin", ios::in | ios::binary); 

    cout << "----- daftar data ------" << endl;
    while(!readFile.eof()){
        readFile.read(reinterpret_cast<char*>(&bufSiswa), sizeof(bufSiswa));
        cout << "nama : " << bufSiswa.nama << endl;
        cout << "kelas : " << bufSiswa.kelas << endl;
        cout << "NIK : " << bufSiswa.NIK << endl;


    }

    return 0;
}


/*

## update 2 ##
setelah melakukan beberpa pencarian di google, saya sudah menemukan solusinya.
saya sudah mencobanya dan hasilnya berhasil. untuk solusinya yang dapat hampir
sama dengan update saya sebelumnya, namun kalini ukuran yang saya inputkan dalam
file binary berupa file dari struct yg sudah dibuat, sehingga ukuran structnya
bisa sesuai dengan yang di write ke binary file.

singkatnya update ini saya mengubah tipedata yg inisialnya string menjadi char
yg besar, dan saya mengubah ukuran yang menjadi parameter write dan read menjadi
ukuran dari struct yg di inisialisasi (yg sudah dibuat dan diinputkan).

tapi perlu diingat, disini harus array char yg digunakan, bila menggunakna string maka
akan tetap menghasilkan error. untuk mengapa seperti itu saya masih belum tahu,
mungkin bisa membca hipotesis saya dibawah.

** hipotesis **
saya pernah melihat di sebuah artikel tentang pengolah string ke biner, ternyata
string membutuhkan sebuah memory awal sebagai penanda awal dari nilai sebuah string.
mnungkin hal ini juga sama dengan array char, karena pada dasarnya kumpulan char
adalah string. tapi string merupakan tipe data (class) bawaan dari cpp yg memiliki method
dan properti tersendiri. sehingga apabila kita menginputkan string ke binary file
itu sama dengan menginputkan object kedalam struct ke binary file. sehingga hanya
pointer addres yang diinputkan kedalam binary file. mungkin itu yang menyebabkan
saya tidak bisa menggunakan string pada struct kali ini.

sebenarnya bisa kita memberikan object ke struct, namuan untuk saat ini saya masih
belum bisa melakukanya. mungkin ketika saya sudah mepelajari lebih lanjut mengenai
class dan object di cpp.

*/


