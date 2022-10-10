#include <array>
#include <iostream>
#include <string>


using namespace std;

//## Enum ##
/*
saya kurang tahu definisi sebenarnya dari enum, namun yg saya dapat 
dari menonton penggunakaanya enum bisa dikatakan sebagai kebalikan dari array.
bila array menggunakan index(int) untuk mendapatkan valuenya. di enum menggunakan 
index var(<- variabel atau tipe data, saya kurang tahu) untuk mendapatkan value int nya.

bisa dilihat dibawah
*/

//intansiasi enum
enum warna{
    merah,
    putih,
    hitam,
    coklat,
    kuning = 5, //keterangan lihat di kodingan
    biru
};

int main(){
    warna kain1, kain2, kain3, kain4; //mendeklarasikan varibel yang bertipe enum yg di deklarasikan

    kain1 = coklat; // enum kain diisi dengan coklat (salah satu dari option enum)

    //akan mengahsilkan output int 
    //int disini akan sesuai dengan index value yg cocok dengan instasiasi enum
    cout << "index untuk option enum coklat = " << kain1 << endl; //3

    //namun bila sebuah value enum sudah diisi dengan nilai angka, maka
    //value setelahnya akan berupa angka setelahnya angka yg diisi.
    //lihat dibawah
    kain2 = kuning;
    kain3 = biru;

    cout << "index untuk kuning : " << kain2 << endl; //5
    cout << "index untuk biru : " << kain3 << endl; //6

    //kita juga bisa menggunakan percabangan dalam membandingkan enum
    kain4 = merah;
    if(kain4 == merah){
        cout << "kain ke 4 adalah merah" << endl;
    }

}
