#include <array>
#include <iostream>
#include <string>


using namespace std;

//** ternary operator **
//kalau yg ini sepertinya tidaak perlu saya jelaskan lebih lagi
//karena pada kebanyakan bahasa keluarga c memiliki kesamaan dalam
//penggunaanya.

//intinya ini adalah singkatan dari statement if dan else.
//syntaxnya :
//kondisi ? jika_tru_jalankan_ini : jika_tidak_jalankan_ini
//contoh bermain2 dengan ternary operator
int main(){
    string nama1 = "nurhadi";
    string nama2 = "sunarkon";

    int a, b;
    a = 10;
    b = 12;

    //contoh menggunkanya
    cout << "nama yang muncul : ";
    cout << (a < b ? nama1: nama2) << endl;

}
