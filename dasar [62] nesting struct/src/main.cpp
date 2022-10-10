#include <array>
#include <iostream>
#include <string>


using namespace std;

//## nesting struct ##
//seperti dengan pengertian luasnya, struct bisa menyimpan data di dalam data,
//bahkan bia menyimpan struct lain juga.
//caranya kita buat 2 buah struct berbeda
//lalu ketika inisiasinya kita masukan struct tersebut ke struct lainya.

//berikut caranya -->
struct anggota{
    string nama;
    string kelas;
};

struct organisasi{
    string nama = "organisasi sekolah";
    string tujuan = "mengisi kegiatan sekolah";

    //diisi anggota
    //anggotanya diisi dengan struct lainya
    //indentifiernya menggunakan nama structnya
    anggota anggota_1;
    anggota anggota_2;
};


int main(){
    //deklarasi untuk struct anggota dan organisasi
    anggota anggota1, anggota2;
    organisasi osis, pramuka;

    //buat anggotanya
    anggota1.nama = "hadi";
    anggota1.kelas = "IX.2";
    anggota2.nama = "budi";
    anggota2.kelas = "IX.1";

    //buat organisasinya
    osis.nama = "organisasi siswa intra sekolah";
    osis.tujuan = "untuk alasan buat kabur pas pelajaran";
    osis.anggota_1 = anggota1;
    osis.anggota_2 = anggota2;

    pramuka.nama = "praja muda karana";
    pramuka.tujuan = "untuk naik kelas";
    pramuka.anggota_1 = anggota1;
    //anggota 2 bisa dikosongi, karena semua field struct boleh kosong

    //-- print ---
    //pramukan
    cout << "-- pramuka -- " << endl;
    cout << "nama : " << pramuka.nama << endl;
    cout << "anggota 1 : " << pramuka.anggota_1.nama << endl;
    cout << "anggota 2 : " << pramuka.anggota_2.nama << endl << endl;

    cout << "-- osis -- " << endl;
    cout << "nama : " << osis.nama << endl;
    cout << "anggota 1 : " << osis.anggota_1.nama << endl;
    cout << "anggota 2 : " << osis.anggota_2.nama << endl << endl;




}
