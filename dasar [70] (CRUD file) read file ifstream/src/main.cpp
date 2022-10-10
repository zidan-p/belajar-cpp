#include <iostream>
#include <fstream>

using namespace std;

//## membaca file (read) ##

/*
sebenarnya cukup sederhana cara membaca file.
untuk melakukan pembacaan file maka akan menggunakan salah satu dari instance (class)
fstream, yaitu  :: ifstream :: .
<input file stream> yang akan membaca file external.

ada beberapa cara untuk mengambil value dari file externa
A.  exrtracting operator ">>"
    kita bisa menggunakan ini sebagai cara untuk untuk mengambil value dari file external.
    namun perlu diiingat, ini adalah extracting operator, jadi hanya setiap kata yang bisa dibaca.
    jadi bila kita hanya menggunakan extracting operator sekali, maka hanya kata awal yang muncul.
    untuk memunculkan kata selanjtnya harus melakukan extracting lagi.

B.  dengan getline() dan melakukan append untuk string
    sebernarnya bagai mana kita mengakses file external ini mirip dengan bagaimana mengakses CLI.
    jadi kita bisa menggunakan getline untuk mendapatkan value dari file.
    namun value disini masih berupa tiap2 line, jadi untuk mendapatkan line selanjtnya bisa
    dilakuakn operasi getline() lagi.

 
*/

int main(){
    //deklarasi variabel
    ifstream myFile;
    string data;

    //membuka file
    myFile.open("data.txt");

    //ketika membuat file ada 3 ios untuk read (input output stream)
    /*
        + ios::in == default
        + ios::ate == memulai dari akhri
        + ios::binary == output file binary
    */

    //## membaca file ##

    //---------- extracting operator ------------
    //">>". namun hanya akan membaca kata pertama dari file
    cout << "[-- extracting operator --]" <<endl;
    myFile >> data;
    cout << data << endl; //ini
    myFile >> data;
    cout << data << endl; //adalah
    myFile.close();
    cout << "\n";

    //--------- getline(stream, var) ------------
    //hanya akan mendapat linenya
    data = "";
    string buffer; //untuk tempat nilai sementara, sehingga lebih dari 1 line bisa di read
    myFile.open("data.txt");

    cout << "[-- getline operator --]" <<endl;
    getline(myFile,buffer); //line 1 : ini adalah file external
    data = data + buffer;
    // data.append(buffer);// atau ini alternatif lain
    getline(myFile,buffer); //line a : dan ini adalah baris ke-dua
    data = data + "\n" + buffer;
    cout << data << endl;
    myFile.close();
    cout << "\n\n";


    //----------- mengambil value hingga line tertentu -----------
    //mengambil hingga mencapai line "data"
    data = "";
    buffer = "";
    bool isTargetLine = false;
    string targetLine = "data";
    myFile.open("data.txt");

    cout << "[-- getline until certain line --]" <<endl;
    while(isTargetLine == false){
        getline(myFile,buffer); 
        data = data + buffer + "\n";
        if(buffer == targetLine) isTargetLine = true;
    }
    cout << data;

    //----------- mengambil daftar data nomer ------------------
    //disini selain mengambil daftar nomer, juga akan memformatnya
    //menjadi sebuah tabel.
    //-- table header --
    string headerNo;
    string headerName;
    myFile >> headerNo;
    myFile >> headerName;
    string header = "+-------+------------------+";
    cout << header << endl;
    cout << "| " << headerNo << "\t" << "| " << headerName << endl;
    cout << "+-------+------------------+" << endl;

    //-- untuk perulangan data --
    //oh iya, disini kita juga akan melakukan hitung data
    int jmlData = 0;
    string no;
    string name;
    while(!myFile.eof()){ //(end of file) cek apakah file sudah mencabai batas akhir file
        jmlData++;
        myFile >> no;
        myFile >> name;
        cout << "| " << no << "\t" << "| " << name << endl;
    }
    cout << "+-------+------------------+" << endl;
    cout << "jumlah data : " << jmlData << endl;




    return 0;
}
