#include <iostream>
using namespace std;
// ======= artimatika dasar =======
/*
ada beberapa operator artimatika yg bisa digunakan dalam cpp
yaitu:
 - "pengurangan"
 + "penjumlahan"
 * "perkalian"
 / "pembagian"
 % "modulus" --> untuk menentukan sisa hasil bagi

jika sebuah operasi matematika antara int menghasilkan bilangan pecahan desimal, maka nilai belakangnya akan di abaikan
*/
/*
int main(){
    //contoh

    int a = 10;
    int b = 5;
    int hasil;

    cout << "--- untuk bilangan bulat ---" << endl;
    hasil = a + b; //penjumlahan
    cout << a << " + " << b << " = " << hasil <<endl;

    hasil = a - b;//pengurangan
    cout << a << " - " << b << " = " << hasil <<endl;

    hasil = a - b;//perkalian
    cout << a << " x " << b << " = " << hasil <<endl;

    hasil = a - b;//pembagian
    cout << a << " / " << b << " = " << hasil <<endl;

    hasil = a / 3 ;//modulus, atau sisa hasil bagi
    cout << a << " % " << 3 << " = " << hasil <<endl;

    //bila hasil operasi  menghasilkan desimal koma, dan
    //variabel hasil bertipe data int, maka bilangan akan dibulatkan
    //supaya hasilnya bisa desimal, maka tipe data hasil harus float/ double
    hasil = 12 / b;
    cout << 12 << " / " << b << " = " << hasil <<endl;

    float hasil2;
    // float de = 10.0
    hasil2 = a / 3.0;
    cout << a << " / " << 3 << " = " << hasil2 <<endl;


    // operasi aritmatika pada cpp juga sama dengan operasi aritmatimak
    //pada matematika, seperti perkalian dijalankan lebih dahulu
    hasil = a + b * a;
    cout << a << " + " << b << " * " << a << " = " << hasil << endl;
    hasil = (a + b) * a;
    cout << "("<< a << " + " << b << ")" << " * " << a << " = " << hasil << endl;
    return 0;
}
*/


// ======= komparasi [perbandingan] =========
//ada beberapa operasai perbadningan dalam cpp
//membandingkan antara 2 nilia, bernilai 1 bila true, dan 0 bila false
/*
int main(){
    int a = 10;
    int b = 10;
    int c = 12;

    //operasi sama dengan[equal], menghasillkan true bila nilai operand sama
    //jangan lupa kurung
    cout << (a == b) << endl;//1
    cout << (a == c) << endl;//0

    //tidak sebanding, mengasilkan trube bila nilai tidak sama dan flase bila nilai sama
    cout << (a != b) <<endl;//0
    cout << (a != c) <<endl;//1

    //kurang dari dan lebih dari (>,<) fungsi sama seperti namanya,jadi saya skip
    cout << (a < c) <<endl; //1
    cout << (a > c) <<endl;//0
    cout << (a < b) <<endl;//0 --> karena nilai a sama dengan b

    //kurang dari dan lebih dari sama dengan, jadi sama dengan yang diatas tapi nilai sama yg dibandingkan
    //akan bernilai true

    cout << (a <= c) <<endl;//0
    cout << (a <= b) <<endl;//1
    cout << (a >= b) <<endl;//1
    return 0;
}
*/



//============== operator logika ==============
//ada beberapa operator logika yg umum digunakan
/*
int main(){
    int a = 10;
    int b = 10;
    int c = 13;

    //operator not, yaitu bernilai kebalikan dari nilai operand
    cout << !(a == b) << endl;//0

    //operator and, yaitu bernilai true bila kedua operand bernilai true
    //dinotasikan sebagai "and" atau "&&"
    cout << (a == b) and (a < c) << endl;//true - true = 1
    cout << (a == b) and (a > c) << endl;//true - false = 0
    cout << (a != b) && (a < c) << endl;//false - true = 0
    cout << (a != b) && (a > c) << endl;//false - false = 0

    //operator or, bernili true bila salah satu / kedua operand bernilai true
    //dinotasikan sebagai "or" atau "||"
    cout << ( a == b ) or ( a > c ) << endl;//true - false = 1
    cout << ( a == b ) or ( a < c ) << endl;//true - true = 1
    cout << ( a != b ) || ( a > c ) << endl;//false - false = 1
    cout << ( a != b ) || ( a > c ) << endl;//false - false = 0

    oper

    return 0;
}
*/



// ============= if dan else if statemen ===========
//bagian ini mungkin akan saya skip karena mudah dan ada pada setiap
//bahasa pemrograman. intinya seperti dibawah
/*
if(kondisi){
    statement
}

--- dengan else ---
if(kondisi){
    statement
}else{ //bila tidak sesuai kondisi maka jalanakan else
    statement
}

--- dengan else if ---
if(kondisi){
    statemen
}else if(kondisi selanjutnta){ //bila kondisi diatas tidak tercapai maka lanjutcek
    statemen
}elese(kondisi){ //lanjut cek
    statement
}else{ //bila tidak satupun yg sesuai maka yg dibaah yan akan dijalanakna
    statement
}

*/




// ============================ switch case =====================
//penggunaanya sama dengan if, namun pada switch case ini,  perbandinganya ditentukan
//beserta statement yg dijalankan. perbandingan disini adalah perbandingan equal.
//eh, tapi dipikir2 switch case ini fungsinya sama saja dengan if statement, namun
//sintaksnya lebih mudah dibaca, karena setiap case (hasil equals) disandingkan dengan 
//statement yang antinya akan dijalankan .
//lihat dibawah untuk lebih leng
using namespace std;
int main(){
    int a;

    cout << "tebak angka a = ..";
    cin >> a;

    // switch(a == 5){
    //     case true: //bila operasi angka a sama denga 5 bernilai true, maka jalanakna statement
    //         cout << "tebakanmu benar" <<endl;
    // }
    //sebernya dibanding menggunakan veris diatas, lebih baik menggunakn if 
    //namun kita bisa menjadikanya seperti ini menggunakna switch case

    //seperti ini
    // switch(a){
    //     case 5://bila angka a bernilai 5 maka jalankan operasi
    //         cout << "tebakanmu benar" <<endl;
    // }

    //-- penggunaan switch yg belum saya tahu--
    //ternyata ada penggunaan switch yg belum saya tahu
    //ternyata pula, itu fungsi break
    //lihat dibawah

    /*
    int cs = 3;
    switch(cs){
        case 1:
            cout << "1" <<", ";
        case 2:
            cout << "2" << ", ";
        case 3:
            cout << "3" << ", ";
        case 4:
            cout << "4" << ", ";
        case 5:
            cout << "5" << ", ";
    }
    */
    //kode diatas dijalankan akan menghasilkan 
    //3, 4, 5
    //hal ini karena switch akan mencari case yang sesuai dengan variabel
    //ketika sudah sesuai dengan var, maka kode statement yg ada dibawahnya akan ikut dijalankan
    //oleh itu, perlu ditambahi break apa bila hanya memerlukan statement yg sesuai dengan casenya


    int cs = 3;
    switch(cs){
        case 1:
            cout << "1" <<", ";
            break;
        case 2:
            cout << "2" << ", ";
            break;
        case 3:
            cout << "3" << ", ";
            break;
        case 4:
            cout << "4" << ", ";
            break;
        case 5:
            cout << "5" << ", ";
            break;
        default: //default akan dijalanakan bila tidak ada case yang sesuai
            cout << "pastinya ini angka";
    }


    cout << "\nakhir program " <<endl;
    return 0;
}

























