#include <iostream>
#include <bitset>


using namespace std;

//:: casting operator ::
//intinya digunakan untuk menekankan bahwa bentuk apa yg akan di operasikan.
//misal char d, kita bisa membuatnya sebagai bentuk integer.
//karena pada dasarnya semua value yg ada pada cpp itu berupa bilangan biner.
//jadi dengan menggunakan casting, kita bisa merubah perlakuakan nilai bilangan biner tersebut
//menjadi perlakukan lain.

//gambaranya karakter 'd', jika dalam binary karakter 'd' adalah 1100100.
//nah angka biner tersebut dapa kita rupakan sebagai bilangan int.
//caranya dengan casting, kita ubah yang awalnya nilai 1100100 diperlakukan sebagai char
// diubah menjadi int.

//hal ini tidak hanya ada pada int dan char, kita juga bisa melakukan casting untuk float
//double, shor dll.




int main(){

    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << a + b << endl;//11.67
    //yg diatas dinamakan dengan implicit casting
    //karena dibelakang sudah terjadi casting dengan mengubah int ke float

    cout << a + (int)b << endl; //11
    //sementara yg ini adalah explicit casting
    //karena casting sudah dimuat dalam expressionya
    //sintaknya (tipe_data)value 

    //contoh untuk char
    cout << c + a << endl;// 105
    //char 'd' --> 100

    cout << (char)(c + a) << endl;

}
