#include <iostream>
#include <fstream>

using namespace std;

//:: menulis file externa ::
//FINALLY, CRUD utuk cpp

/*
untuk file kali ini akan di jelaskan bagaimana cara untuk membuat file di cpp.
karena saya sudah pernah mempelaji mengenai nodejs, jadi bagaimaan cara crud disini mungkin
tidak terlalu berbeda dengan yang ada di nodejs.

sebelum melakukan manipulasi file, yg pertama kali perlu dikakukan adalah mengimport library
fstream. librari ini merupakah salah satu dari 3 librari dasar untuk memanipulasi file.
adapaun library yaitu :
 - fstream >> gabungan ifstream + ofstream
 - ifstream >> input file stream 
 - ofstream >> output file stream

`` atau sebenarnya fstream adalah 2 libray itu ?🤔 saya kurang tahu ``

karena kali ini adalah bagaimana cara melakukan write file, maka langsung saja ke kodingan.

*/


int main(){

    //membuat object filestreamnya dulu
    //disini untukmelakukan write maka menggunkana ofstream
    //output file stream
    ofstream myFile;

    /*
    myFile.open("data1.txt");
    //untuk membuka file.
    //bila da maka buka file
    //bila tidak maka buat file

    myFile << "ini adalah isi dari file"; //menggunakna operator isertion untuk mengisikan string ke file
    myFile <<"\n ini adalah baris baru, ditambah dengan angka " << 123;
    //:: bila file sudah ada isinya sebelumya maka isi file akan ditimpa dengan yang baru.
    */

    /*
    cout << "file sudah diisikan " << endl;
    myFile.close();
    //digunakan untuk menutup file stream
    //suapay file yang dibuka / dibuat sudah menjadi 
    //bagian terpisa dari program.
    //contoh kasusu myFile.close() bila kita membuka suatu file dengan aplikasi 
    //dan mencoba mengubah file dengan oalikasi lain maka windows akan memuncukan pesan error.
    */
    

    /*
    ada 3 macam sebuah file bisa diakses write.
    -   ios::out    
        [menjadikan file yg dibuka sebagai output, sifatnya sama dengan trunc, 
        bila file tidak ada maka dibuat, bila file ada maka diakses write dengan 
        cara menimpanya]
    -   ios::app (append)
        [menjadikan akses writenya dipaling akhir file, misal file ada isinya, 
        maka string insertion akan dimasukan dibagian akhri file]
    -   ios::trunc <<-- default
        [bila file tidak ada maka dibuat, bila file ada maka diakses write dengan 
        cara menimpanya]

    kita menetukan write akses dengan menambahkanya keparameter kedua ketika .open;
    lihat dibawah untuk lebih jelasa
    */

    int ang = 987;

    //untuk akses ios::out
    myFile.open("data1.txt",ios::trunc);
    myFile << "mengisi data 1";
    myFile << "\n baris baru dengan angka " << ang;
    myFile.close();
    cout << "data1 sudah di isi" << endl;

    //untuk akses ios::out
    myFile.open("data2.txt",ios::out);
    myFile << "mengisi data 2";
    myFile << "\n baris baru dengan angka " << ang;
    myFile.close();
    cout << "data2 sudah di isi" << endl;

    //untuk akses ios::out
    myFile.open("data3.txt",ios::app);
    myFile << "mengisi data 3";
    myFile << "\n baris baru dengan angka " << ang;
    myFile.close();
    cout << "data3 sudah di isi" << endl;



    


}
