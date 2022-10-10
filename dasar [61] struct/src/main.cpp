#include <array>
#include <iostream>
#include <string>


using namespace std;

//## struct ##
//mirip dengan array, namun lebih sakti karena dapat menyimpan 
//pasangan antara key dan value.
//sehingga didalam data, dapat menyimpan data
//bila dijavascript ini bisa disebut sebagai object

//untuk cara pembuatan mirip dengan object pada oop cpp.
//pertama kita instasiasi strucknya.
//setelah itu buat object strucknya dan masing2 key-nya diberi nilai
//conoth berikut ini -->>
struct buah{
    string nama;
    string rasa;
    float harga;
    int jumlah;
    
    //coba untukmengisi nilai default
    // string nama = "buah sembunyi";
    // string rasa = "rasa buah";
    // float harga = 0;
    // int jumlah = 0;

}; 
// jangan lupa titik koma untuk struct

int main(){
    buah anggur; // membuat object struct

    //mengisi nilai masing2 struct
    anggur.nama = "anggur hijau";
    anggur.rasa = "manis sedikit masam";
    anggur.harga = 12000;
    anggur.jumlah = 19;

    cout << "nama : " << anggur.nama << endl;
    cout << "rasa : " << anggur.rasa << endl;
    cout << "harga : Rp. " << anggur.harga << endl;
    cout << "jumlah : " << anggur.jumlah << endl; 


    //coba untuk menggunakan nilai default
    //bila tidak diberikan nilai default maka string akan kosong
    //dan int serta float akan bernilai 0
    buah salak;
    cout << "nama : " << salak.nama << endl;
    cout << "rasa : " << salak.rasa << endl;
    cout << "harga : Rp. " << salak.harga << endl;
    cout << "jumlah : " << salak.jumlah << endl; 




}
