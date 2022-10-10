#include <iostream>
#include <fstream>
#include <array>

using namespace std;

//## latihan io external binary file ##
//disini akan melakukan latihan sederhana
//tentang input dan output file biner sederhana.
//karena hanya latihan maka saya tidak akan menjelaskanya terlalu detail.
//oh iya, karena ini adalah latiha inptu dan output, maka nantinya akan ada 
// 2 file cpp yg akan berfungsi masing2 untuk input dan output.
//untuk file ini sendiri digunakna untuk input.

//untuk file binernya akan diisi dengan beberapa struct.

//:: note ::
//karena akan ada 2 file, maka mau tidak mau harus mengunakan cli dalam mengcompile
//file cpp.
//untuk file ini gunakan :::::>>>
//g++ .\src\main.cpp -o .\bin\Main.exe
//lalu jalankan file lewat powershell
//Main.exe

//struct untuk input
struct Siswa{
    int NIK;
    string nama;
};

int main(){

    fstream myFile;
    //membuka file dengan opsi yg banyak sekali, saya kurang tahu mengapa bisa sebanyak ini
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    //untuk struct masing2
    Siswa siswa1, siswa2, siswa3, siswa4;

    //isi data masing2
    siswa1.NIK = 1234;
    siswa1.nama = "nurhadi";

    siswa2.NIK = 1235;
    siswa2.nama = "hadi";

    siswa3.NIK = 1244;
    siswa3.nama = "narkoclok";

    //input data ke file
    myFile.write(reinterpret_cast<char*>(&siswa1), sizeof(Siswa));
    myFile.write(reinterpret_cast<char*>(&siswa1), sizeof(Siswa));
    myFile.write(reinterpret_cast<char*>(&siswa1), sizeof(Siswa));

}
