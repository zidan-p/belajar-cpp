#include <iostream>
using namespace std;
// ---------- if else directive ----------
//funsinya sama dengan if else statement pada umumnya.
//cuma disini hanya untuk macro.
//untuk sintaksnnya bisa dilihat dibawah.

#define LANG_ID 2

#if LANG_ID == 1
    #define BAHASA "inggris"

// #elif // ini sebenarnya bisa digunakan untuk if else

#else
    #define BAHASA "indonesia"
#endif

/*
kira2 untuk apa kita melakukan ini?
tetunya alasan pertama yaitu karena memory.
di preposesing directive semua dijalankan sebelum di compile,
sehingga memory yg digunkana tidak terlalu besar.

selain itu, dikedepanya pastinya dalam menjallankan cpp kita akan
banya melakukan include berkas, dan dimana berkas2 tersebut memiliki
nilai macro tersendiri. nah untuk menyesuakan dan menjalankan preprosessing
sesuai alur tersebut tentunya dibutuhkan bercabangan

*/

int main(){
    cout << "bahasa yg dipilih : " << BAHASA << endl;
    return 0;
}
