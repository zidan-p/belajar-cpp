#include<limits>
#include <iostream> //ini adalah bagai mana kita akan memanggil librari
//iostream digunakan untuk menangan hal2 dasar yang berkaitan dengan input dan output.
//contoh ketika user mengitikan dikonsol lalu menekan enter, ini merupakan input yang akan di proses iostream
// atau ketika menampilkan sebuah test di konsol, yg ini bagaimana iostream menangan output



// ========= contoh printing di console [1] ==========
// karakter "<<" dapat di katakan sebagai pengisi nilai
// contohnya program dibawah.
// karakter string akan di assign ke dalam cout "si out"
// yg nantinya, isi dari cout ini akan ditampilkan ke konsol
// maksud assign disini mungkin lebih mirip mengisikan nilai
//namun bedanya nilai dibawah selai di diisikan, juga diproses lagi.
//nah proses ini yang akhirnya akan di tampilkan di monitor (konsol)

// using namespace std; 
// int main(int argc, char const *argv[]){
//     std::cout << "testing" <<std::endl;
//     std::cout << "imi testing dengan line berikutnya" <<std::endl;
//     std::cout << "yag ini dengan escape character \n" <<std::endl;
//     std::cin.get(); //untuk mnereima inputan user, namun belum akan kita proses
//     return 0;
// }


//========= Variabel [2] ==========
//berikut bagai mana cara membuat dan mengakses varibel
//dengan tipe data integer secara singkat di cpp
//intinya variable ddigunakan untuk menyimpan sebuah nilai
//variabel hanya menyimpan, kita yang akan mengolahnya sendiri
//jadi nilai yang ada dalam variabel tidak akan kemana, sebelum kita akses atau timpa (read dan write)
//contoh dibawah, nilai yang saya simpan dalam varibel tidak akan ditampilkan kedala konsole.
//namun kita bisa mencoba untuk mengaksesnya, yaitu dengan meng"assign"kan ke cout, sehingga bisa keluar nilai variabelnya
// using namespace std;
// int main(int argc, char const *argv[]){

//     int d; //cara mendeklarasikan variabel, 
//     int a = 123; //cara membuat variabel, sama seperti bahasa pemorgraman kebanyakan
//     int b = 321; //atau sama seperti javascrip
//     int c = a + b; // melakukan penjumlahan dasar

//     int d;//cara mendeklarasikan variabel, jadi hanya menyiapkan tempat untuk nilai, tidak ada nilainya.
//     //!! namun setiap mendeklarasikan variabel harus disertai dengan tipe datanya, supaya mudah diketahui jenis data apa yang boleh masuk !!
//     d = 10; //cara memberikan nilai

//     cout<< a << "\n";
//     cout<< b << "\n";
//     cout<< c << "\n";
//     std::cin.get();
//     return 0;
// }



// ========== cin [3] ===============
// berikut bagaimana cara menyimpan dan mengolah inputan user
//serta menampilkanya, 

// using namespace std;
// int main(int argc, char const *argv[]){
//     int a; 
//     cout<< a << "\n"; // contoh melakukan cout, artinya nilai dari variabel akan dimasukan(diolah pula)


//     int b;
//     cout << "masukan nilai, nanti akan saya tambahkan : " <<endl;
//     cin >> b; //berbeda dengan cout, disini cin akan meng"assign"kan dirinya ke variabel b
//     //jadi akan memberi nilai kepada b, nilai dari cin ini didapat dari konsol
//     cout << "angkan anda -> " << b << " <- \n";
//     cout << "nanti, bukan sekarang" <<endl;

//     cin.get();
//     return 0;
// }




// ====== tipe data ==========
/*
berikut bagai mana bagai mana fundamental cara tipe data di cpp.
kita menentukan tipedata ketika mendeklarasikan variabel sebelum nama dari variabel
seperti yang sudah saya sebutkan sebelumnya, secara singkat
tipe data adalah bagaimana kita memnetukan data apa yang boleh masuk 
kedalam sebuah variabel.
mengapa kita harus menggunakan tipe data? mengapa tidak langsung dimasukan saja kedalam variabel?
hal ini perlu dilakukan supaya kita bisa menentukan bagaimana data dalam variabel nanti
akan diperlakukan. contohnya begini, anggap saja kita punya 2 buah data
yang satu string (/gampangnya text) "hello wolrd", dan yg satu adalah angka 12. 
sekarang kita masukan data tersebut kedalam variabel masing2,
variabel1 = string, variabel2 = angka.
selanjutnya, seumpama kita bagi variabel2 dengan 4 (variabel2/4), maka hasilnya tentu 3.
namun.. seumpama kita lakukan hal serupa untuk variabel1 kira2 bagaimana hasilnya?
pastinya tidak bisa kan.

nah, jadi ketika kita mendeklarasikan sebuah variabel kita perlu untuk memberi tipe data,
supaya data tersebut lebih jelas penggunaanya. jelas penggunaan disini yaitu mengacu pada kita
yang jelas tahu akan diapakan variabel ini, dan mesih yg tahu bagaimana varibel ini akan diolah.
oh iya, mesinpun juga tidak tahu bagaimana variabel akan diolah bila tidak deri tipe data.
berikut beberapa tipe data yang diberikan
int (integer/ angka)
string (string/ anggap text)
char (karakter huruf)
dll..kit alihat nanti
*/

using namespace std;
int main(int argc, char const *argv[]){
    // --- berikut daftar bilangan bulat ---
    int e = 10;// (integer) 4byte 32 bit
    long b = 102; // 8 byte | 64 bit
    short c = 5; // 2 byte | 4bit

    // --- bilangan desimal ---
    float desi = 1.0; // lebih pendek jumlah maksimal
    double desimal = 2.4; //lebih panjang ukuran

    // --- karakter ----
    // char (cara mengisinya mirip dengan string, cuma hanya boleh 1 huruf)
    //char haru smenggunakan kutip 1 `'`
    char hallo = 'a';

    // -- boolean ---
    //hanya menyimpa 2 nilai, true atau false
    bool benarkah = true;

    // =================== UNSIGNED =================
    // artinya tidak bertanda, ketika bilangan yang masukan ke dalam memory tidak
    //memerlukan ruang lagi untuk tanda posotif dan negatif.
    // yaitu sebiha bilangan angkan, yang nilai negatifny dihilangkan, sehingga 
    //dapat menjadi lebih panjang walau dengan ukuran yag sama versi biasa
    //bisa dicek di numeric_max;

    //beriktu cara mengetesnya---->
    int a = 10; //contoh mendeklarasikan variabel dan mengisi nilai
    cout << sizeof(a) << "\n"; //digunakan untuk mengetahui ukuran sebuah variabel (dalam byte) | 1 byte == 8 bit
    //4
    cout << numeric_limits<int>::max() << "batas integer" << endl; //integer akan menggunakan 4 byte (32 bit) (karena batasnya). 
    cout << numeric_limits<unsigned int>::max() << " batas integer unsigned" << endl; //integer unsigned akan menggunakan 4 byte tapi dengan batas lebih besar
    //untuk mengetahui berapa batas angka yang boleh digunakan untuk integer, bisa melaui function diatas
    //jangan lupa untuk include #include<limits>
    return 0;
}
