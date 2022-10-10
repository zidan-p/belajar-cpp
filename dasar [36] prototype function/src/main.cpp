#include <iostream>

using namespace std;

//kali ini saya akan menjelaskan sesuatu yg bernama prototype fungsi
//kegunaan prototype fungsi sendiri yaitu supaya fungsi yg dipanggil
//pada perintah sebelum inisiasi fungsi, dapat berjalan.

/*
saya ambil contoh javascript
pada javascript, ketika membuat sebuah fungsi, kita dapat menjalankan fungsinya dimanapun
asal fungsinya sudah diinisilisasi ataupun scopenya sesuai(dibahan nanti), atau fungsinya bukan
functiion expression

berbeda dengan js, di cpp kita harus melakukan prototype fungsinya terlebih dahulu.
jadi dibagian awal program dibuat sebuah fungsi kosong yg namanya sama dengan fungsi 
yg akan di prototype, fungsi tersebut tidak memiliki kurawal "{}". namun didalam
kurung diberi parameter yg sama dengan fungsi yg diprototype.
untuk lebih jelasnya bisa dilihat pada program dibawah.

*/


//---- prototype -----
int tambah(int a, int b);
void tampilAngka(int a, int b);

int main(){
    int a = 10;
    int b = 20;

    cout << "jumlah a + b = " << tambah(a,b) << endl;
    tampilAngka(a,b);

    return 0;
}

int tambah(int a, int b){
    return a + b;
}

void tampilAngka(int a, int b){
    cout<< "\n----- tampilan angka ----\n";
    cout << "angka pertama : " << a <<endl;
    cout << "angka kedua : " << b <<endl;
}