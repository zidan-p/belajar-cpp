#include <iostream>
using namespace std;

//## preprocessing directive ##
//untuk mengecek kode yg sudah di processing, bisa menggunakna command ini
//g++ -E src/main.cpp -o main.p
//disini saya akan menjelaskan mengenai 2 macro/
//saya kurang tahu apa pengertina sebenarnya dari macro, tapi
//secara garis besar macro adalah bagian program yg mana nantinya
//akan diganti dengan nilai macro.

// ---------- MACRO merubh nilai --------------------
//disini akan dijelaskan cara menggunakan macro merubah nilai
//untuk membuat macro tinggal directtive "#define"
//dan diikuti nama macro dan blok / kode penggantinya

#define PI 3.1415 //<-- ini adalah macro untuk integer
#define BAHASA "indonesia" // <<-- untuk string

//-- untuk fungsi --
#define KUADRAT(x)(x*x) //<<-- perkalian
#define MAX(A,B)((A < B) ? B : A ) //<<-- ternary

int main(){

    //---- macro ---
    //dengan memanggil nama macro, maka nama tersebut dalam program yg
    //sebelum dicompile akan diganti dengan nilai sebenarnya.
    //jadi program dibawah ini sebenrnya setelah dibentuk pada preprocessing
    //akan menghasilkan bentuk yg sama.
    cout << "nilai pi : " << PI << endl;
    cout << "nilai pi : " << 3.1415 << endl;
    //tujuan dibuat preprocessing ini supaya nilai yg digunakan adalah nilai
    //tetap dan tidak memakan ruang memory. 
    //dibawah adlaah contoh lagi
    cout << "bahasa : " << BAHASA << endl;

    //conoth macro untuk fungsi
    int a = 10;
    cout << "hasil kuadrat : " << KUADRAT(a) << endl;
    //ternyata bisa dipakai untuk variabel

    //contoh untuk ternary
    cout << "hasil terbesar adalah " <<  MAX(10,12) << endl;


    // -------- melakukan undef -----------
    //digunakna supaya macro yang telah didefinisikan menjadi kosong.
    //sehingga macro dapat difinisikan ulang dengan nilai berbeda
    #undef BAHASA
    // cout << "bahasa  : " << BAHASA << endl; // ini akan menghasilkan error

    #define BAHASA "inggris"
    cout << "bahasa : " << BAHASA << endl;

    return 0;
}
