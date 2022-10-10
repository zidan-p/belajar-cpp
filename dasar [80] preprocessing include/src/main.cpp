#include <iostream>
using namespace std;

// ---------- include ----------
/*
sederhana saja, include digunakan untuk mengcopy file target 
kedalam file ini.
jadi nilai setelah #include directive adalah target filenya.
tapi saya kurang tahu apa maksud dari tanda "<" dan ">" pada 
directive ini, tapi untuk memanggil file yang masih berada dalam 1
directory bisa langsung ditulis #include "taget_file.cpp"

**
oh tidak jadi gk tahu, ternyata tanda "<" dan ">" memberitahukan
bahwa file tersebut diambil dari compiler cpp.

*/

/*
disini saya membuat sebuah file yang bernama library.h, yg mana file
ini akan saya mainkan secara berbeda. ada saya mainkan seperti default
include, ada yang saya buat include didalam main function, ada yang saya 
buat macro didalamnya dan memanggilnya di file ini.
..
tapi untuk file ini saya hanya akan mencoba untuk mendefinisikan macro
pada file tersebut dan memanggilnya disini.

*/

/*
cara yg saya gunakan disini merupakan cara yang paling basic, dan 
sebenarnya sudah sesuai. namun,,,
kita akan menemui seperti dalam kasus ini
..
    + saya ingin membuat variabel string di file "library.h",
      jadi saya melakukan include <String>
    + saya juga ingin membuat variabel serta melakukan prosesing
      di file main, jadi saya juga menginclude <String>
.....

dari kasus diatas kita sudah melakukan sebuah kesalahan, yaitu dengan
melakan include 2 kali, hal ini tentunya tidak bagus karena hasil compile
akan menjadi lebih besar serta ketika menjalankan akan membuat performa
yg kurang sebab melakuakn loading file.

jika projeknya masih sederhana, mungkin kita masih bisa memantau include
apa yang bisa dijalankan. namun bagaimana bila projectnya mejadi lebih 
rumit?
tentunya kita tidak mungkin akan memantau semua include file satu2.

nah, oleh karena ini padaproject selanjutnya ini akan dijelaskakan mengenai
preprocessing directive yang digunakan untuk mengatasi hal terebut.
dibuat untuk project selanjutnya karena ini juga merupakan materi yg
kompleks dan banyak, sehingga butuh penjelasan terpisah untuknya.

jadi lihat pada project selanjutnya (^^)

*/

#include "library.h"

int main(){
    cout << "nilai pi dari bibrary.h : " << PI << endl;
    cout << "kuadrat : " << KUADRAT(12) << endl;
    return 0;
}
