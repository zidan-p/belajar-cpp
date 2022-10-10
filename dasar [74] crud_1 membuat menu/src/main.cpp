#include <iostream>
#include <fstream>
#include <array>

using namespace std;

//:: Projeck CRUD ::
//membuat projek crud untuk cpp
//karena ini hanya projek maka saya hanya memberi komen singkat.
//sebenarnya buka singkat, tapi lebih tidak terlalu berat isinya.

//<< deskripsi >>
//aplikasi ini akan menampilkan menu, dan user akan diminta untuk
//menginputkan opsi dari menu tersebut.
//dasarnya terdapat 5 buah menu, 4 untuk CRUD dan 1 untuk selesai.
//mungkin juga nanti akan saya tambah menu lagi.
//basicnya seperti itu, untuk crud mungkin tinggal bermain2 logika.

//untuk menampilkan pilhan dan mendapat inputnya
int getOption(){
    int input;
    system("cls"); //untuk input command di cli

    cout << "\nProgram CRUD data Siswa" << endl;
    cout << "+-----------------------+" << endl;
    cout << "[1] tampilkan siswa" << endl;
    cout << "[2] tambah data siswa" << endl;
    cout << "[3] edit data siswa" << endl;
    cout << "[4] hapus data siswa" << endl;
    cout << "[5] selesai (exit).." << endl;
    cout << "+-----------------------+" << endl;
    cout << "pilih <1 - 5> : ";

    cin >> input;
    return input;
}

//enum untuk pilihan, sehingga program menjadi lebih jelas tujuanya
enum option{READ = 1, CREATE, UPDATE, DELETE, FINISH};// dimulai dari index 1

int main(){

    int pilihan = getOption();
    char isContinue;


    //case untuk masing2 pilihan
    while (pilihan != FINISH){
        switch (pilihan){
            case READ:
                cout << "menampilkan siswa " << endl;
                break;
            case CREATE:
                cout << "menambah siswa " <<endl;
                break;
            case UPDATE:
                cout << "mengedit siswa" <<endl;
                break;
            case DELETE:
                cout << "menghapus siswa" <<endl;
                break;
            
            default:
                cout << "input tidak valeed" << endl; 
                break;
        }

        label_continue: // ini merupakan label yg merupakan salah satu dari control flow cpp
        //intinya ketika label ini di go, maka programa akan memulai dari sini lagi

        cout << "Lanjutkan ? (y/n) > ";
        cin >> isContinue;

        if((isContinue == 'y') | (isContinue == 'Y')){
            pilihan = getOption(); 
            //jika lanjut maka lakukan pemilihan ulang dan akan dilanjut perulangan
        }else if((isContinue == 'n') | (isContinue == 'N')){
            break;
            //jika tidak maka selesaikan perulangan
        }else{
            goto label_continue;
            //jika input tidak valid maka ulangi program ke label
        }

        // pilihan = getOption();
    }

    cout << "akhir program..." << endl;
    

}
