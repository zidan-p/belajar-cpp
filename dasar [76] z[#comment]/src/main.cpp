#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

//:: Projeck CRUD ::
//membuat projek crud untuk cpp
//ini adalah versi singkat dan hanya ada comment

/**
 * @brief 
 * enum option for user so user the code becaome readable
 */
enum option{
    READ = 1, 
    CREATE, 
    UPDATE, 
    DELETE, 
    FINISH
};

/**
 * @brief main siswa struct
 * the main struct for siswa, this is where siswa data is structured
 */
struct Siswa {
    int nilai;
    char nama[50], 
        kelas[50], 
        jurusan[50];
};

/**
 * @brief temporary string siswa struct | \n
 * this is only used to get string from cli.
 * then all string from here will be converted to main siswa struct
 */
struct tempSiswa{string nilai,nilai,nama,kelas, jurusan;} temp;



int getOption();
void checkDB(fstream &data);
int getDataSize(fstream &data);
void writeData(fstream &data, int posisi, Siswa &inp);
void addDataSiswa(fstream &data);
Siswa readData(fstream &data, int posisi);
void displayDataSiswa(fstream &data);
Siswa inpSiswa();
void updateDataSiswa(fstream &data);
void deleteDataSiswa(fstream &data);



/**
 * @brief the main function
 * this is where all main command execute
 * 
 * @return int 
 */
int main(){
    fstream data;
    checkDB(data);
    int pilihan = getOption();
    char isContinue;
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
            displayDataSiswa(data);
            updateDataSiswa(data);
            displayDataSiswa(data);
            break;

        case DELETE:
            cout << "menghapus siswa" <<endl;
            displayDataSiswa(data);
            deleteDataSiswa(data);
            displayDataSiswa(data);
            break;

        default:
            cout << "input tidak valeed" << endl; 
            break;
        }

        label_continue:
        cout << "Lanjutkan ? (y/n) > ";
        cin >> isContinue;
        if((isContinue == 'y') | (isContinue == 'Y')){
            pilihan = getOption(); 
        }else if((isContinue == 'n') | (isContinue == 'N')){
            break;
        }else{
            goto label_continue;
        }
    }

    cout << "akhir program..." << endl;
    

}

/**
 * @brief Get the Option from user
 * 
 * @return int - the user input crom cli, between [1 - 5]
 */
int getOption(){
    int input;
    system("cls");
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
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}

/**
 * @brief check the availability from binary file
 * 
 * @param data  the stream that used to read / write data
 */
void checkDB(fstream &data){
    data.open("data.bin", ios::in | ios::out | ios::binary);
    //cek apakah data ada
    if(data.is_open()){
        cout << "database ditemukan :: " << endl;
    }else{
        cout << "database tidak ditemukan, membuat database baru..." << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::in | ios::out | ios::binary);
    }
}


/**
 * @brief add data to binary file
 * in this function user where the user
 * input their data to be added in binary file
 * 
 * @param data the stream that used to read / write data
 */
void addDataSiswa(fstream &data){
    Siswa siswaInput;
    int size = getDataSize(data); 
    siswaInput = inpSiswa();
    writeData(data, size+1, siswaInput);
}


/**
 * @brief core function to write data |
 * this is the core from this program to write all data,
 * the data can be from anywhere, as long they are siswa object
 * 
 * @param data stream that used to read / write data
 * @param posisi position of the data, or in short the order of the data
 * @param inp data that will be inserted / written
 */
void writeData(fstream &data, int posisi, Siswa &inp){
    data.seekg((posisi - 1)*sizeof(inp), ios::beg);
    data.write(reinterpret_cast<char*>(&inp), sizeof(inp));
    cout << "data terinput....." << endl;
}

/**
 * @brief + Get the Data Size value |
 * get the sum of certain data.
 * in ihis case get the sum of siswa object data
 * 
 * @param data stream that used to read / write data
 * @return int sum of available data
 */
int getDataSize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Siswa);
}

/**
 * @brief 
 * read data in teh certain position.
 * ex: i have 4 list of data sequences,
 * because i want the data number 2 then
 * i will get the data from that sequences 
 * in second order.
 * this function is similar idea with that example
 * 
 * @param data stream that used to read / write data
 * @param posisi data position
 * @return Siswa siswa object in given position
 */
Siswa readData(fstream &data, int posisi){
	Siswa readSiswa;
	data.seekg((posisi - 1)*sizeof(Siswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readSiswa),sizeof(Siswa));
	return readSiswa;
}

/**
 * @brief display all available siswa data.
 * just like that
 * @param data stream that used to read / write data
 */
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


/**
 * @brief 
 * update data from binary file.
 * the algoritma of this function are like this 
 * 1. get the id or number data from user
 * 2. get the data
 * 3. accept all user input to an buffer ot temp object
 * 4. overwritten the old data with buffer object
 * 
 * @param data 
 */
void updateDataSiswa(fstream &data){
    int nomor;
    Siswa updateSiswa;
    cout << "pilih no : ";
    cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    updateSiswa = readData(data, nomor);

    cout << "\n\nPilihan data >> " << endl;
    cout << "Nama : " << updateSiswa.nama << endl;
    cout << "Kelas : " << updateSiswa.kelas << endl;
    cout << "Jurusan : " << updateSiswa.jurusan << endl;
    cout << "nilai : " << updateSiswa.nilai << endl;

    cout << "\nUbah data >>" << endl;
    Siswa newSiswa = inpSiswa();
    writeData(data, nomor, newSiswa);
}

//input siswa
Siswa inpSiswa(){
    Siswa siswaInput;
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
    siswaInput.nilai = stoi(temp.nilai);

    return siswaInput;
}



void deleteDataSiswa(fstream &data){
    int nomor,size, offset = 0;
    Siswa blankSiswa, tempSiswa;
    size = getDataSize(data);
    fstream tempData;

    blankSiswa.nama[0] = 0;

    cout << "Hapus nomor : ";
    cin >> nomor;
    writeData(data, nomor, blankSiswa);
    tempData.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);
    
    for(int i = 1; i <= size; i++){
        tempSiswa = readData(data, i);
        if(!(tempSiswa.nama[0] == 0)){
            writeData(tempData, i - offset, tempSiswa);
        }else{
            offset++;
            cout << "data terhapus.." << endl;
        }
    }

    size = getDataSize(tempData);
    data.close();
    data.open("data.bin", ios::trunc|ios::out|ios::binary);
    data.close();
    data.open("data.bin",ios::out|ios::in|ios::binary);

    for(int i = 1; i <= size; i++){
        tempSiswa = readData(tempData, i);
        writeData(data, i, tempSiswa);
    }
}





