#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cstring>
#include <limits>

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

//enum untuk pilihan, sehingga program menjadi lebih jelas tujuanya
enum option{READ = 1, CREATE, UPDATE, DELETE, FINISH};// dimulai dari index 1
struct Siswa {
    int nilai;
    char nama[50];
    char kelas[50];
    char jurusan[50];
};

struct tempSiswa{
    string nilai;
    string nama;
    string kelas;
    string jurusan;
} temp;


//--- prototype function ----
int getOption();
void checkDB(fstream &data);
int getDataSize(fstream &data);
void writeData(fstream &data, int posisi, Siswa &inp);
void addDataSiswa(fstream &data);
Siswa readData(fstream &data, int posisi);
void displayDataSiswa(fstream &data);




int main(){

    //untuk stream file
    fstream data;
    checkDB(data);

    int pilihan = getOption();
    char isContinue;

    //case untuk masing2 pilihan
    while (pilihan != FINISH){
        switch (pilihan){
            case READ:
                cout << "menampilkan siswa " << endl;
                displayDataSiswa(data);
                break;
            case CREATE:
                cout << "menambah siswa " <<endl;
                addDataSiswa(data);
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
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //supaya karakter enter "\n" tidak terbaca di input selanjutnyas
    return input;
}

//untuk cek data base, menggunkana reference supaya object streamyg didapat 
//itu yg diakses
void checkDB(fstream &data){
    data.open("data.bin", ios::in | ios::out | ios::binary);
    //cek apakah data ada
    if(data.is_open()){
        cout << "database ditemukan :: " << endl;
    }else{
        cout << "database tidak ditemukan, membuat database baru..." << endl;
        data.close(); //database tdk ada jadi hentikan operasi editing
        data.open("data.bin", ios::trunc | ios::in | ios::out | ios::binary);
    }
}


//tambah data siswa
void addDataSiswa(fstream &data){
    
    Siswa siswaInput;
    int size = getDataSize(data); 
    //untuk mendapat data dari stream
    //supaya file binary dapat diinputkan dibelakan

    cout << "Nama : ";
    getline(cin, temp.nama);
    cout << "Kelas : ";
    getline(cin, temp.kelas);
    cout << "jurusan : ";
    getline(cin, temp.jurusan);
    cout << "nilai : ";
    getline(cin, temp.nilai);

    strcpy(siswaInput.nama, temp.nama.c_str());
    strcpy(siswaInput.kelas, temp.kelas.c_str());
    strcpy(siswaInput.jurusan, temp.jurusan.c_str());
    siswaInput.nilai = stoi(temp.nilai); //ambil data integer

    writeData(data, size+1, siswaInput);
     
}


//menuliskan data
//ini apa lagi , coooyyy
void writeData(fstream &data, int posisi, Siswa &inp){
    data.seekg((posisi - 1)*sizeof(inp), ios::beg);
    data.write(reinterpret_cast<char*>(&inp), sizeof(inp));
    cout << "data terinput....." << endl;
}

//untuk mendapatkan penjang database
//ahgrgt, saya tidak tahu apa ini
//yg penting programnay jalan
int getDataSize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Siswa); //saya juga tidak tahu apa maksudnya ini 
}


//untuk membaca data siswa, return object struct siswanya
Siswa readData(fstream &data, int posisi){
	Siswa readSiswa;
	data.seekg((posisi - 1)*sizeof(Siswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readSiswa),sizeof(Siswa));
	return readSiswa;
}


void displayDataSiswa(fstream &data){
	int size = getDataSize(data);
	Siswa showSiswa;
	cout << "no.\tnilai.\tnama.\tkelas.\tJurusan." << endl;
	for(int i = 1; i <= size; i++){
		showSiswa = readData(data,i);
		cout << i << "\t";
		cout << showSiswa.nilai << "\t";
		cout << showSiswa.nama << "\t";
		cout << showSiswa.kelas << "\t";
		cout << showSiswa.jurusan << endl;
	}
}








