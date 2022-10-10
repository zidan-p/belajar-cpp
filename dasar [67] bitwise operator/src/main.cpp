#include <iostream>
#include <bitset>


using namespace std;

//** bitwise operator **
/*
bitwise operator adalah operator yang digunkan untuk melakukan 
operasi dilevel bit (bukan byte). jadi dengan operator ini kita akan bermain2
dengan nilai binari dari expression, bukan value angkanya.

adapaun bilangan binari yaitu seperti 1001101, 1110101, 101011, dll.
bilangan ini adalah bilangan yang sebenarnya dibaca oleh mesin konputer.

kita disiini akan belajar untuk melakukan operasi pada bit karena hal ini 
penting untuk penggunaan program yang memiliki memory terbatas, efisiensi tingii,
manipulasi binari file atau yang lainya.
seperti membuat kmpresi, efisiensi grafik, melakukan enkripsi, program pada microcontroller.
dibawah ini adalah operator tersedia untuk melakukan operasi bit.

-- bitwise operator --
&   AND bitwise AND
|   OR bitwise inclusive OR
^   XOR bitwise exclusive OR
~   NOT
<<  SHL shift bits left
>>  SHR shift bits rigth

-- operasinya --

+---------------------------+
|         AND "&"           |
+-------+-------+-----------+
|   a   |   b   |   result  |
+-------+-------+-----------+
|   1   |   1   |     1     |
|   1   |   0   |     0     |
|   0   |   1   |     0     |
|   0   |   0   |     0     |
+-------+-------+-----------+
:: bila salah satu bernilai false (0), maka hasilnya false

+---------------------------+
|         OR "|"            |
+-------+-------+-----------+
|   a   |   b   |   result  |
+-------+-------+-----------+
|   1   |   1   |     1     |
|   1   |   0   |     1     |
|   0   |   1   |     1     |
|   0   |   0   |     0     |
+-------+-------+-----------+
:: bila salah satu bernilai tru, maka hasilnya true

+---------------------------+
|         XOR "^"           |
+-------+-------+-----------+
|   a   |   b   |   result  |
+-------+-------+-----------+
|   1   |   1   |     0     |
|   1   |   0   |     1     |
|   0   |   1   |     1     |
|   0   |   0   |     0     |
+-------+-------+-----------+
:: bile keduanya berbeda, maka bernilai true

+-------------------+
|      NOT "~"      |
+-------+-----------+
|   a   |   result  |
+-------+-----------+
|   1   |     0     |
|   0   |     1     |
+-------+-----------+
:: kebalikanya, bila true maka false, bila false maka true

+------------------------------------------------------------+
|                           SHL "<<"                         |
+------------+-------------+----------------+----------------+
|   a        |   b         |   result(bin)  |   result(dec)  |
+------------+-------------+----------------+----------------+
| 10         | 1           | 10100          |   10           |
| 1010       | 1           |                |                | <<-- binary
+------------+-------------+----------------+----------------+
:: melakukan shifting ke kiri digit yg dioperasikan
>> diatas nilai biner angka 10 digeser 1 digit ke kiri sebanyak 1 buah
>> adapaun nilai yg overflow (hilang) akan dipindahkan kealamat memori setelahnya (dikiri)

+------------------------------------------------------------+
|                           SHR ">>"                         |
+------------+-------------+----------------+----------------+
|   a        |   b         |   result(bin)  |   result(dec)  |
+------------+-------------+----------------+----------------+
| 10         | 1           | 101            |   5            |
| 1010       | 1           |                |                | <<-- binary 
+------------+-------------+----------------+----------------+
:: melakukan shifting ke kanan digit yang di operasikan
>> diatas nilai biner 10 digeser 1 digit ke kanan sebanyak 1 buah
>> adapaun nilai yg overflow (hilang) akan dipindahkan kealamat memori setelahnya (di kanan)

:: NOTE ::
perlu diingat bahwa anotasi "<<" untuk cout dan "<<" di bitwise itu berbeda.
di cout, itu dinamakan dengan isertion. adapaun ">>" di cin saya kurang tahu.



oh iya, untuk melihat nilai bit suatu nilai, perlu enggunakan library bitset.
untuk return sintaksnya yaitu
bitset<digit_bit_yg_akan_di_return>(value_yg_akan_di_return)
akan mengembalikan value berupa nilai bit dari yg direturn.




*/

//suapay tidak sulit dalam melakukan print binary maka dibuat functionya terlebih dahulu.
void printBinary(unsigned short val, string name){
    cout << name << " << ";
    cout << "bin : " << bitset<8>(val) << " | ";
    cout << "val  : " << val << endl;
}


int main(){

    unsigned short a = 5;
    unsigned short b = 10;
    unsigned short c;

    //cek nilai short
    cout << "panjang short : " << sizeof(a) << endl;

    //nilai awal ---
    cout << "--- initial value -- \n";
    printBinary(a,"a");
    printBinary(b,"b");
    cout << "\n";

    //beberapa contoh bitwise

    //** OR | **
    cout << "\n[ OR '|' (inclusif or)]\n";
    c = a | b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");

    //** XOR ^ **
    cout << "\n[ XOR '^' (exclusif or)]\n";
    c = a | b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");

    //AND &
    cout << "\n[ AND '&' ]\n";
    c = a & b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");

    //not
    cout << "\n[ not '~' ]\n";
    c = 10;
    printBinary(c,"c");
    c = ~c;
    printBinary(c,"c");

    //SHL
    //untuk mengeser bit ke kiri
    cout << "\n[SHL '<<' ]\n";
    c = 10;
    printBinary(c, "c");
    c = c << 2; //geser 2 digit
    printBinary(c,"c");

    //SHR
    //menggeser bit ke kanan
    cout << "\n[SHR '>>' ]\n"; 

}
