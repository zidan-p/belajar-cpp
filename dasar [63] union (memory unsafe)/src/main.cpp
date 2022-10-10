#include <array>
#include <iostream>
#include <string>


using namespace std;

//## union ##
/*
sama halnya dengan struct, union bisa dibilang sebagai array yang sakti,
karena union mampu untuk menyimpan berbagai macam data dengan adanya pasangan
key dan value.

namun ada yang membedakan dengan struct yaitu bagaimana union menyimpan nilai.
bila struct menyimpan nilai dengan alamat memori berbeda

ilustrasinya seperti di bawah

** struct **
struct person :
    - string nama
    - int usia
    - string alamat

- pic memory
+-----------------------+
|   nama                |   memiliki panjang memory seperti string
+-----------------------+
+-----------+
|   usia    |               memiliki panjang memori seperti int
+-----------+
+-----------------------+
|   alamat              |   memiliki panjang memori seperti string
+-----------------------+

- memori sebenarnya
+-----------------------+-----------+-----------------------+
|   nama                |   usia    |   alamat              |
+-----------------------+-----------+-----------------------+
besar memory struct = besar memori nama + usia + alamat


** union **
struct person :
    - string nama
    - int usia
    - string alamat

- pic dan memori sebenarnya
+-----------------------+
|nama, usia  dan alamat |
+-----------------------+
union menggunakan pembagian memory bersama untuk menyimpan nilai di listnya.
sementara besar memory union adalah sebesar memory list terbesarnya (dalam contoh ini adalah string).
ini dapat memungkinkan karena dalam union, list yang lain akan menggunakan memory yang tidak
digunakan oleh list lainya.
hal ini tentunya cukup kontras dengan bagaimana memory pada variabel bekerja, sehingga dalam mengelola union
perlu perlu perhatian extra untuk memanagemen memnory supaya pengisian nilai dapat terbagi sesuai kebutuhan.

karena sifat itulah union sering digunakan untuk dalam kasus project yang perangkan menjalankanya memiliki
memory terbatas.

dibawah merupakan bagaiaman cara membuat union serta contoh apabila nilai pada union overflow.
*/

union dat{
    int angka;
    char karakter[4];
};


int main(){
    dat test;

    test.angka = 10;

    cout << "size : " << sizeof(test.angka) << " byte | ";
    cout << "value : " << test.angka << endl;
    cout << "size : " << sizeof(test.karakter) << " byte | ";
    cout << "value : " << test.karakter << endl; //nilai karakter akan kosong karena tidak diisi
    cout << "-------------------------------------------------" << endl;

    test.karakter[0] = 'h';
    test.karakter[1] = 'a';
    test.karakter[2] = 'd';
    test.karakter[3] = 'i';

    cout << "size : " << sizeof(test.angka) << " byte | ";
    cout << "value : " << test.angka << endl; //nili angka akan terpengaruh karena beberapa bagian memorynya telah dipakai oleh karakter
    cout << "size : " << sizeof(test.karakter) << " byte | ";
    cout << "value : " << test.karakter << endl;
    cout << "-------------------------------------------------" << endl;

}
