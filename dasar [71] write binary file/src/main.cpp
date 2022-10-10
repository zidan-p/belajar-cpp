#include <iostream>
#include <fstream>

using namespace std;

//## write binary code ##
//disini akan dijelaskan bagaimana cara untuk menulis binary code
//karena saya masih belum paham terlalu maka akan saya langsung tulis kodenya

int main(){

    fstream myFile; //karena untuk akses write
    int myNum = 12345; //angkan yang nantinya akan ditulis dalam bentuk binary

    myFile.open("data.bin",ios::out | ios::binary);// untuk mendapatkan akses write dan dalam bentuk library
    //saya masih belum tahu bagaiaman cara menjadikan "|" sebagai bagian dari parameter

    myFile.write(reinterpret_cast<char*>(&myNum), sizeof(myNum));
    //saya kurang tahu apa dan bagaimana cara method dan function diatas bekerja.
    //tapi intinya diatas digunakan untuk menjadikan output writenya berupa bit
    //bitnya didapat dari variabel myNum.


    return 0;
}
