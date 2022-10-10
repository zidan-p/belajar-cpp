#include <iostream>

using namespace std;

// ================ operator assigment ==============
//operator yang mengubah nilai dari variabel yang di assign
//cth : a = 12 + 12
//diatas, " = " juga termasuk salah satu operator assigment
//karena mengubah nilai a

    //mulai dari sini programnya tidak akan saya jelaskan lebih lanjut
    //karena konsep program cpp ini mirip denagan java, yang mana
    //java ini sudah saya pelajari.
    //jadi untuk elajutnya saya hanya akan mencatat keberadaan istilah 
    //yg hanya pada cpp

int main(){

    //assigment (variabel a diisi oleh nilai 10)
    int a = 10;
    cout << "nilai a = " << a << endl;

    //variabel a ditambahkan dengan 10
    //merupakan bentuk singkat dari a = a + 10
    //hal ini juga berlaku untuk variabel berikunya
    a += 10;
    cout << "nilai a = " << a << endl;

    //variabel a dikurangi dengan 10
    a -= 10;
    cout << "nilai a = " << a << endl;

    //varibel a dikali dengan 5
    a *= 5;
    cout << "nilai a = " << a << endl;
    
    //varibel a dibagi dengan 5
    a /= 5;
    cout << "nilai a = " << a << endl;

    //varibel a adalah modulus 3
    a %= 3;
    cout << "nilai a = " << a << endl;

    cout << "\n------------- incremetn decrement -----------\n";

    int c = 10;
    int d = 10;

    //post increment
    cout << "\n\npost incremetn\n";
    cout << c << endl; //10
    cout << c++ << endl; //10
    cout << c << endl ;//11

    //preincrement
    cout << "\n\npost incremetn\n";
    cout << d << endl; //10
    cout << ++d << endl; //11
    cout << d << endl << "\n\n"; //11


    //--------- while loop --------
    //sama dengan bahasa permograan pada umumnya
    int e = 0;
    cout << "--------- while loop ---------\n";
    while(e <= 10){ //selama kurang dari samadengan 10 maka jalanakn perulangan
        cout << "hello ";
        cout << e <<endl;
        e++; //dilakukan increment supaya looping tidak infinite
    }
    cout << "\n\n\n\n";

    // -------- do while loop ------------
    //mirip while loop, namun aksinya dikerjakan terlebih dahulu
    //baru dilakukan pengecekan kondisi.
    //bila kondisi bernilai true maka akan dilakuakan perulangan hingga
    // bernilai false. atau bila false, maka hanya dilakuakn sekali

    int f = 0;
    cout << "-------- do while loop -------- \n";
    do
    {
        cout << "hai "<< f << endl;
        f++;
    } while (f < 10);
    
    //for loop
    //loop yang sangat umum pada bahassa pemrograman
    //saka skip dulu penjelasnya karena sangat umumnya
    cout << "\n\n----------- for loop -----------\n";
    for(int i = 0; i < 10; i++){
        cout << "perulangan ke " << i << endl;
    }
    cout << "\n\n";
    
    //atau cara untuk menetukan total
    //variasi lain dari for loop
    //saya juga bingung bagai mana cara tempat ke tiga bisa menghasilkan itu
    //🤔🤔🤔
    //perlu diingat urutan operasi perubahan pada tempat ketiga ini
    // memengaruhi bagaimana nilai akan diakses para statement perulangan
    // cth: bila saya menambahkan total sebelum melakukan increment i
    // maka nilai total iterasi (perulangan) kedua tetap menjadi 0
    //sementara nilai i sudah menjadi 1,
    //saya masih belum tahu logikanya, apakah karena adanya post increment dan preincrement
    cout << "## variasi lain for loop ##" << endl;
    int total = 0;
    for(int i = 0; i < 10; i++, total += i){
        cout << i << " | -> | " << total << endl;
    }


    //contoh break
    //ketika mencapai code break, maka perulangan akan dihentikan
    cout << "\n\n## contoh untuk break ##" <<endl;
    for(int i = 0; i <= 10; i++){
        cout << "-> " << i << " " << endl;
        if(i == 5){ //bila i = 5, maka hentikan perulangan dan lajut ke barus setelhanya
            cout << "keluar dari perulangan..." << endl;
            break;
        }
    }

    //contoh continue
    //keika mencapai code continue, maka perulangan akan dilanjutkan ke iterasi
    //berikutnya, sehingga kode dibawahnya tidak dijalankan
    cout << "\n\n## contoh untuk continue ##" <<endl;
    for(int i = 0; i <= 10; i++){
        if(i == 6){
            cout << "--- ada yg ketinggalan" << endl;
            continue;
        }
        cout << "-> " << i << endl;
    }

    //break dan continue juga berlakuakn untuk perulangan lainya,
    //seperti while dan do while
    //untuk break sendiri dapat diartikan untuk mengakhiri kode program
    //sehingga hampir selalu dipakai dalam switch case
    cout << "\n\n## contoh untuk continue dan break dalam looplainya ##" <<endl;
        for(int i = 0; i <= 10; i++){
        if(i ==3){
            cout << "--- ada yg ketinggalan" << endl;
            continue;
        }
        if(i == 8){
            cout << "keluar dari perulangan..." << endl;
            break;
        }
        cout << "-> " << i << endl;
    }

    //contoh suatu masalah bila menggunaakan continue pada while

    int inc = 0;
    while (inc <= 10){
        inc++; //kita harus menaruh incremen sebellum pengecekan kondisi untuk continue
        if(inc == 5){
            continue;
        }

        cout << " -> " << inc << endl;
        // inc++; //apabila menaruh incremen disini, maka program akan selalu terulang dan tidak bisa keluar
    }

    return 0;
}