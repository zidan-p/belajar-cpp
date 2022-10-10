#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// function, 
//penjelasanya akan saya skip, karena konsep umum function sudah ada
//dalam setiap bahasa pemrograman
//bahkan diluar itupun function tetap sebuah keharusan untuk dibuat.

//intinya funstion pada setiap bahasa pemrograman itu sama dengan function pada matematika
/*
cth :
f(x) = 2x - 2
f(3) = 4

konsep fungsi umum itu persis seperti fungsi matematika diatas.
hanya saja, pada cpp atau bahasa pemrograman lain, function memiliki
tingkah laku dan perilaku tersendiri.
seperti menghasilkan nilai tertentu, bertipe data tertentu dll.

adapun fungsi utama pada function di setiap bahasa pemrograma yaitu supaya
kita bisa membuat sebuah program yg bisa menangani suatu perintah tertetu
yang mungkin dilakukan secara berulang2.(berulang2 disini bukan perulangan looping
namun, pada setiap perintah pasti ingin menjalakan sebuah perintah tertentu, yg mungkin
pertintah tertentu tersebut akan digunakan dalam perintah lainya lagi).
selain untuk menjalankana perintah tertentu, fungsi juga dibuat supaya kode yg
dikerjakan menjadi lebih mudah dibaca, karena setiap perintah tertentu, sudah di wakili
dengan pemanggilan fungsi, sehingga baris kode lebih ringkas.

disi akan saya coba menggunakan function bawaan cpp dari librarynya. (dari tutorial)
yaitu cmath

*/

/*
daftar beberapa funcion cmath : www.cppreference.com
ceil(x)     <-- pembulatan ke atas
cos(x)      <-- consinus
exp(e)      <-- exponen (pangkat2)
fabs(x)     <-- nilai absolute dalam float
floor(x)    <-- pembulatan kebawah
fmod(x)     <-- modulus dalam float
log(x)      <-- logaritma dengan basis natural
log10(x)    <-- logaritma dengan basis 10
pow(x,y)    <-- x pangkat y
sin(x)      <-- sinus
sqrt(x)     <-- akar kuadrat
tan(x)      <-- tangen
*/

int main(){
    // int x = 64;
    // cout << "menghitung akar dari x -> "<<endl;
    // cout << "akar x adalah " << sqrt(x) <<endl;

    //contoh permianan dadu 
    char lanjut;
    while(true){
        cout << "lempar ? (y/n) : ";
        cin >> lanjut;
        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) <<endl <<endl; //rand bertipe data long, ditambah 1 supaya tidak menghasilkan angka 0
        }else if(lanjut == 'n'){
            break;
        }else{
            cout << "input tdk valid!" << endl;
        }
    }
    cout << "!! terima kasih sudah bermain" << endl;
}