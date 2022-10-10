#include <iostream>


//## preprocessing directive ##
//sebuah directif yang menjadikan suatu block
//atau sebuah command di lakukan pemrosesan terlebih dahulu sebelum di compile.
//preprocessing directive ditandai dengan awalan '#' sebelum directivenya.

//contohnya yaitu "#include", jadi ketika suatu berkasa file diberi include,
//maka sebelum file di compile,, akan diproses terlebih dahulu file tersebut untuk
//memanggil file yg diinclude.

//jadi hasil dari compilenya nanti akan berupa gabungan antara program file asli
//ditambah dengan dengan program dari file include. 

//jika masih bingung, singkatnya preprocessing directive adalah directive yang
//akan diubah menjadi sintaks cpp murni sebelum di compile. dan sintaksnya itu tergantung
// dengan directive nya sendiri. nah, karena diproses sebelum di compile dan hanya
//mengubah directive menjadi sintaks cpp murni, maka preprocessing tidak akan berhubungan
//dengan memory. contohnya dibawah ini.

//ini adalah directive "macro", jadi semua yang menggunakan ini akan diubah menjadi sintaks yg terdefinisi
#define PI 3.14159265359

//lalu apa bedanya dengan menggunakan variabel?
//seperti diawal, karena ini adalah prepocessing maka tidak akan berhubungan dengan memory
//dan semua blok preproscessing diatas akan diubah menjadi double literal.
//bisa lihat dibawah untuk lebih jelasnya vvvv~~~~

using namespace std;

int main(){
    double pi = 3.14159265359;

    cout << "nilai pi = " << pi << endl;
    cout << "nilai PI = " << PI << endl;

    //--- dilihat memory -----
    cout << "addres pi = " << &pi << endl; //ini akan berhasil
    // cout << "addres PI = " << &PI << endl; //ini akan error
    //cout << "address PI = " << &3.14159265359 << endl; //ini adalah bagai mana nanti cpp akan mengcompilenya

    //jadi mungkin seperti itu bagaimaan gambaran dari perbedaan variabel dengan preprocessing directive
    //setelah ini akan ada banyak materi mengenai preprocessing directive.

    return 0;
}
