#include <iostream>
#include <fstream>

using namespace std;

//ini adalah file baca, oleh karena itu gunakan commad ini untuk
//untuk melakukan compile. ::>>
//g++ .\src\read.cpp -o .\bin\Main.exe
//lalu jalankan program main
//bin\main.exe

//karena ini adalah file baca, maka perlu juga struktur untuk menerima
//input dari stream pembaca file binary. oleh karena itu disini akan 
//menggunakan struct daru main.

struct Siswa{
    int NIK;
    char nama[];
};

int main(){
    fstream readFile;
    //supaya melakukan pembacaan file biner
    readFile.open("data.bin", ios::in | ios::binary); 

    Siswa dataSiswa; //untuk menampung nilai dari stream pembaca

    readFile.read(reinterpret_cast<char*>(&dataSiswa), sizeof(Siswa));

    cout << (int)dataSiswa.NIK << endl;
    cout << dataSiswa.nama << endl;

    readFile.close();

    cout << "test untuk output \nsaya tidak tahu bisa aau tidak" << endl;

    cin.get();
    return 0;
}


/*
!! PENTIGN !!
saya tidak tahu mengapa program sya tidak bekerja.
saya sudah mencoba beberapa cara yg menurut saya bisa membuat program berjalan
seperti yg diharapkan.

yang pertama saya mencoba untuk mengikuti tutorial.
hasilnya hanya nilai int dari struct yang muncul, nilai ke 2 string tidak muncul
dan apabila dilakukan extracting 2 kali, hasilnya tetap sama, hanya int dari struct awal
yg muncul.

jadi saya pikir mungkin karena data yg dimasukan adalah sebuah string, yg mana string itu
merupakan kumpulan dari char, maka saya buat struct untuk buffernya yg bertipe data 
string menjadi char. nah, karena saya tidak tahu juga berapa banyak karakter setiap
string maka saya membuatnya menjadi flexible array char.

disini muncul masalah lagi, ternyata flexible array hanya bisa ditaruh di bagian paling akhir
struct. sehingga mau tidak mau saya harus mengubah structur struct menyesuaikan pesan error.

kali ini terminal tidak mengeluarkan pesan error serta int dan string berhasil di output.
namun output untuk string hasilnya cukup aneh, karena hasilnya buka dari yg saya inputkan, melainkan
karakter acak yg tidak jelas encodingnya apa.

akhirnya setelah saya coba cari2 di banyak halaman google, tipe data string yang diinputkan
sebenarnya bukan hanya kumpulan char sederhana, melainkan sebuah objek kompleks yg membentuk
kumpulan karakter. sehingga ketika program membaca string, ini tidak akan akan dibaca sebagai
string dengan sifat dan properti yang dimiliki. namun sebagai char, jadi program membaca biner string
itu dan menghasilkan karakter acak.

sya lihat juga di stackoverflow ternyata hal yg saya lakukann biasanya pada versi cpp
sebelumnya akan menghasilkan segmentation fault, atau yg lebih parah akan ada terjadinya
crash atau program mengkonsumsi semua memory dan cpu  sehingga memberi kerusakan
pada latop.
ngerii😰

jadi mau tidak mau untuk tutorial kali ini akan langsung saya skip kebagian selanjutnya.



## Update ##
saya sudah mulai menemukan secercah harapan mengenai masalah ini.
yai terkait dengan size dari struct, setelah saya riset (kurang tahu juga istilahnya 😁)
ternyata bagaiamana orang2 memasukan string ke binary menggunakan char yg sizenya besar.
sehingga terdapat size fixed yang dapat dijadikan parameter untuk argumen.
untuk string sebenarnya juga bisa, tapi lumanyan rumit untuk dilakuakan jadi akan saya 
berikan link stactoverflownya saja. dan juga karena ini adalah struct, jadi lebih sulit lagi
untuk menentukan size tiap2 struct. tapi akan saya coba untuk memberika referensi link stack
overflow.

intinya pada update kali ini saya akan menggunakan array char yg berukuran besar untuk pengganti string.

[link stackoverflow]
+ untuk bagaimana cara menggunakan struct dengan char
https://stackoverflow.com/questions/22192254/reading-binary-data-into-struct-with-ifstream

+untuk bagaiaman cara memasukan dan membaca string ke binary
https://stackoverflow.com/questions/23399931/c-reading-string-from-binary-file-using-fstream

untuk file updatenya bisa dilihat pada project setelahnya...


*/


