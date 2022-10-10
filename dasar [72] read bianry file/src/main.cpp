#include <iostream>
#include <fstream>

using namespace std;

//## read binary code ##

int main(){

    fstream myFile; //karena untuk akses read file
    int hasil; //untuk menyimpan hasil, karena saya sudah tahu bahwa yg disimpan berupa int

    //cara 1 untuk membuka,
    //tapi cara ini akan menghasilkan hasil berbeda ketika mengambil value
    //jadi lebih baik pakai ccara ke dua
    //membuka file dan mendapatkan datanya (ios::in)
    myFile.open("data.bin", ios::in | ios::binary);
    myFile >> hasil;
    myFile.close();
    cout << "hasilnya adalah : " << hasil  << endl;


    //cara kedua
    //dengan menggunakna method bawaan, yaitu read
    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    // disini bagaimana digunakna untuk membacanya
    //saya masih bingung juga bagaiaman cara kerjanya
    cout << "besar int : " << sizeof(hasil) << endl;
    cout << "value : " << hasil << endl; 
    return 0;
}
