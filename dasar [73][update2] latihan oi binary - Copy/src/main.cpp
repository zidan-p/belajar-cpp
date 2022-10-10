#include <iostream>
#include <fstream>
#include <array>
#include <string>

using namespace std;


//:: note ::
//karena akan ada 2 file, maka mau tidak mau harus mengunakan cli dalam mengcompile
//file cpp.
//untuk file ini gunakan :::::>>>
//g++ .\src\main.cpp -o .\bin\Main.exe
//lalu jalankan file lewat powershell
//Main.exe

//ini adalah file revisi jadi semua yg sating akan saya ganti dengan char

// struct untuk input
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

    fstream myFile;
    //membuka file dengan opsi yg banyak sekali, saya kurang tahu mengapa bisa sebanyak ini
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    //untuk struct masing2
    Siswa siswa1, siswa2, siswa3, siswa4;

    // //isi data masing2
    // siswa1.NIK = 1234;
    // siswa1.nama = "nurhadi";

    // siswa2.NIK = 1235;
    // siswa2.nama = {"hadi"};

    // siswa3.NIK = 1244;
    // siswa3.nama = "narkoclok";

    // siswa1 = {123, "nurhadi", "XIR1"};
    siswa1.NIK = 123;
    siswa1.nama = "hallo";
    siswa1.kelas = "kelasss";

    siswa2 = {124, "ajit", "XIR1"};
    siswa3 = {122, "narkoclok", "XIR1"};


    //input data ke file
    myFile.write(reinterpret_cast<char*>(&siswa1), sizeof(siswa1));
    myFile.write(reinterpret_cast<char*>(&siswa2), sizeof(siswa2));
    myFile.write(reinterpret_cast<char*>(&siswa3), sizeof(siswa3));

}


