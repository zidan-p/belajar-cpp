#include <array>
#include <iostream>
#include <string>


using namespace std;

//getline console.string
//supaya string input yg dipisahkan oleh spasi tetap dapat terbaca.
//getline ini merupakan salah bagian dari iostream.

int main(){
    string text;
    cout << ">> ";
    
    //syntax untuk getline
    //getline(cin,var_input) //<<-- bukan hanya cin, melainkan semua stream yang memungkinkan untuk operasi console
    getline(cin, text);

    cout << "yang adan masukan : \n" << text << endl;


    // --- program untuk mengitung substrign yang dicari ---
    int posisi = 0; //posisi saat mencari substring
    int jumlah = 0; //jumlah substring yg sudah dicari

    
    while(true){
        //nilai posisi ditentukan oleh posisi substrign selanjutnya (posisi + 1) (<<- index awal mencari)
        //karena mencari jumlah kata maka menggunakan posisi sebagai indikatornya
        posisi = text.find(" ", posisi+1);
        jumlah++;
        if(posisi < 0){ //apabila dalam mencari substring sudah overflow, maka akan mengembalikan nilai -1
            break;
        }
        // cout << "posisi > " << posisi << endl; //untuk cek posisi terkini
    }

    cout << "jumlah kata : " << jumlah << endl;
}
